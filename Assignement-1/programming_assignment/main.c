/** This program is created to operate on an ATM machine for a bank.

    This program allow customers to manage their PIN, also to change the PIN,
    to verify how many time the user enter the pin correctly and incorrectly.
    The PIN is set to 1234 by default.

    The program will loop all the time until user press 4 then the program end.
    The menu is displayed every time after the user finish and execution

    Program created for Programming Continuous Assignment Year 1 Semester 1

    Author: Iosif Dobos, C16735789, @copyright all right are reserved
    Date: 13/11/2016

*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <ctype.h>
#define PIN 5

int main()
{
    //Declaring the variables
    int user_input, user_pin;
    int length, f_input, s_input;
    char str_input, str_user_input[PIN], str_new_pin[PIN], str_retype_pin[PIN];
    int new_pin, retype_pin;
    int original_pin;
    int i;
    int ok;

    //declaring the pointers
    char *ptr1;

    ptr1 = &str_input;

    i = 0;
    f_input = 0;
    s_input = 0;
    //create original PIN and set it as 1234
    original_pin = 1234;
    ok = 1;

    //create a do-while loop and run until user press 4.
    do
    {
        //Creating the Menu-bar for the customers
        printf("Please select any option from the following Menu.\n");
        printf("\n");
        printf("=================ATM SERVICE MENU====================");
        printf("\n1. Enter PIN and verify correct.");
        printf("\n2. Change PIN");
        printf("\n3. Display the number of times the PIN was entered:");
        printf("\n      (i) Successfully");
        printf("\n      (ii) Incorrectly");
        printf("\n4. Exit Program");
        printf("\n===================================================");

        // Asking user to enter number between 1-4
        printf("\nPlease enter your option: ");
        scanf("%s", &str_input);

        //parse str_input to be a integers
        user_input = atoi(ptr1);

        // If user press 1 from the Menu
        if ( user_input == 1 )
        {
            //create a loop for the PIN and loop will run until PIN is introduced correct
            while( 1==1 )
            {
                //asking user for the PIN
                printf("Please enter the PIN: ");
                scanf("%s", &str_user_input);
                user_pin = atoi(str_user_input);

                    //create a condition and check if user PIN = default_pin
                    if ( user_pin == original_pin )
                    {
                        printf("***Successfully***\n\n");
                        f_input++;
                        break; // if this condition true jumps out from the while loop
                    }
                    else
                    {
                        printf("***Incorrect***\nPlease try again.\n");
                        s_input++;
                    }//end else statement

            }//end while loop

        }// end 1st if statement

        else if ( user_input == 2 )  //if user enter to change the PIN
        {
            ok = 1;
            // create a while loop for the new PIn if user enter pin correctly twice exit the loop
            while( 1==1 )
            {
                //ask user to enter the new PIN and check if is 4 digit long and all are numbers
                printf("\nEnter the new PIN: ");
                scanf("%s", &str_new_pin );
                length = strlen(str_new_pin);
                if( length == 4 )
                {
                    for( i=0; i<length; i++ )
                    {
                        // verify if user input are numbers
                        if(!isdigit(str_new_pin[i]))
                        {
                            printf("You must enter a number not a character.\nThe new PIN must contains numbers from 1-9.\n");

                            printf("\nEnter the new PIN: ");
                            scanf("%s", &str_new_pin );
                            length= strlen (str_new_pin);
                            i = -1;
                        }// end if isdigit condition
                    }// end for loop


                    // parse str_new_pin to be an integer
                    //new_pin = atoi(str_new_pin);
                    length = strlen(str_new_pin);

                    if ( length == 4 )
                    {
                        printf("Enter the new PIN again: ");
                        scanf("%s", &str_retype_pin );

                        // parse str_new_pin to be an integer
                        new_pin = atoi(str_new_pin);

                        //parse str_retype_pin to be an integer
                        retype_pin = atoi(str_retype_pin);

                        // check if user PIN match
                        if( new_pin == retype_pin )
                        {
                            printf("***The PIN has been changed successfully.***\n\n");
                            original_pin = new_pin;
                            break;
                        }
                        else // send user feedback
                        {
                            printf("Sorry the PIN you entered do not match\nPlease try again.\n");
                        }
                    } // end checking if-else condition

                }  // end if statement
                else
                {
                    printf("The new PIN needs to have 4 digits\n");
                }


            }//end while loop
        }//end if statement
        else if ( user_input== 3 ) //if user enter 3 display how many times the user enter the PIN correctly and incorrectly
        {
            printf("\nYou entered the PIN, %d time successfully, and %d time incorrectly.\n\n", f_input, s_input);
        }//end the 3rd if statement
        else if ( user_input == 4 ) // if user enter 4 change integer ok from 1 to 0
        {
            ok = 0;
        }
        else // if user press other values between 1-4
        {
            printf("\nThe option selected does not exist.\nPlease select one of the existing options displayed below.\n\n");
        }


    }// end do while loop
    while( ok != 0 ); //the do-while loop would run until ok = 0

    // give customer a feedback
    printf("\nThank you very much for your time.\n");

    return 0;

}//end main
