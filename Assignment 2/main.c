/**     CA Assignment Programming Semester II       */

/**
*   Programming Semester II Assignment 2
*
*   In this assignment need to create a program in C language that will perform some security
    authorisation based on user access code input, encrypt user input access code make some assignment operation.
    Check if user input is correct, display numbers of time user entered the code successfully and incorrectly.

*   A menu is displayed to the screen which allow user to chose on task one at a time from the respective menu
    and then an action is perform based on the user input

    1. for task one is to ask user to enter a code more exactly 4 numbers from 0 - 9 which are stored into an array
    2. for task to two encrypt the user code and verify if match with the default access code which is 4523
    3. for task three decrypt user code
    4. for task four track all the user access code inputs and when task four is required by the user display to the
    screen how many time the user entered the code correctly or incorrectly
    5. when the button five is press by the user program terminates.

*   All these tasks are passed to a different function by reference and there perform the work required to accomplish the task
    In this program all functions are passed trough by reference and use pointer notation only

*   Created by Iosif Dobos, C16735789 @copyright all rights are reserved.

*   Starting date: 22/02/2017
    End date:

*   Hours spend it: 2-hours on 22/02/2017
                    2-hours on 23/02/2017
                    2-hours on 24/02/2017
                    3-hours on 27/02/2017
                    3-hours on 03/03/2017

*   Compiler used: CodeBlocks 16.01
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//define my symbolic name and set name to be equal to 4
#define SIZE 4
#define LENT 1

//declare my function prototype
int display_menu ( char [] );
void function_task1(int [], int *);
void function_task2(int [], int *, int *, int *, int *, int *);
void function_task3(int [], int *, int *, int *);
void function_task4( int *, int *, int *, int * );
void function_task5( void );


//main function
int main()
{
    /**
        creating my local variables used for this function
    */
    int input_code[SIZE]; //create the access code array for user input
    char user_option[LENT];//used for menu, this variable is used to check the user input from the menu
    int rtn_option;

    //create 3 variables that are used
    int option1_first;
    int option2_second;
    int option3_third;
    //set variables to zero
    option1_first = 0;
    option2_second = 0;
    option3_third = 0;

    //create 2 static variables that are used to counter number of times user entered the code successfully and unsuccessfully
    //this static variables will keep the data during the program execution
    static int counter1;
    static int counter2;
    //set my static variables to zero
    counter1 = 0;
    counter2 = 0;


    /**
        create a do while loop
        set the condition != 5
        and the do-while loop will run the program until user enter number 5
    */
    do
    {
        //call function which display the menu and ask user to enter his option from 1 - 5 and returns an integer value
        //used for switch statement
         rtn_option = display_menu( user_option);

        /**
            create a switch case that perform a specific task depending on user input
            for e.g. if user press number 1 do case 1 and so on
            if user press other number rather from 1 - 5 display a "default" message in switch case
        */
        switch ( rtn_option )
        {
            //if user enter number 1 from the menu do case 1
            case 1:
            {
                printf("Option 1. Enter code:\n");
                //call function task 1 and within that function check if user code is correct and return 1 if it is
                //else return 0
                function_task1( input_code, &option1_first );

                break;
            }// end case 1
            case 2:
            {
                        // For option two encrypt the user access code and check if match with the correct
                        // access code setted by default which is 4523
                        // call function_task2 and display a message whatever the code was encrypted
                        // correctlly or incorrectlly
                        //encrypt_code =
                        function_task2( input_code, &option1_first, &option2_second, &option3_third, &counter1, &counter2);
                        break;
            }//end case 2
            case 3:
            {
                /**
                    If user press 3 decrypt the code
                    Do that only if the code was encrypted
                    Otherwise display a message said cannot decrypt code
                */
                function_task3( input_code, &option1_first, &option2_second, &option3_third );
                break;
            }//end case 3
            case 4:
            {
                /**
                    if user enter number 4 display how many times user enter the code successfully or unsuccessfully
                    pass this into different function which are passing two integers parameters and return a integer type
                    rtn_times = function_task4(successfully, unsuccessfully);
                */
                function_task4( &option1_first, &option2_second, &counter1, &counter2 );
                break;
            }//end case 4
            case 5:
            {
                //call function_task5 and in a separate function
                //display a message with program ends
                function_task5();
                break;


            }
            //if a different option is press rather then between 1-5 a feedback message is displayed to the screen
            default:
            {
                printf("Sorry invalid input. Choose any option from 1 - 5.\nPlease try again!!!\n\n\n");
                break;
            }//end default
        }//end of switch case

    }//end of while loop
    while ( rtn_option != 5 ); //this do while loop will run until the condition is meet

    return 0;

}//end function main()

    //implement function display_menu
/**
    Call function menu and then display the menu to the screen when the function its called
    After each task is finished call function again and display the menu

    This function is pass by reference and returns a integer parameter
*/
int display_menu( char usr_option[LENT])
{
    int rtn_option;

    //display the menu to the screen
    //after an action is performed the menu is displayed on the screen again
    printf("\n\t\t\t**************************  MENU  ***************************\n");
    printf("\t\t\t*****  Option 1. Enter Code\t\t\t\t*****\n");
    printf("\t\t\t*****  Option 2. Encrypt code and verify if correct\t*****\n");
    printf("\t\t\t*****  Option 3. Decrypt code\t\t\t\t*****\n");
    printf("\t\t\t*****  Option 4. Display number of times code was enter\t*****\n");
    printf("\t\t\t*****\t\t(i) Successfully\t\t\t*****\n");
    printf("\t\t\t*****\t\t(i) Unsuccessfully\t\t\t*****\n");
    printf("\t\t\t*****  Option 5. Exit Program\t\t\t\t*****\n");
    printf("\t\t\t*************************************************************\n");

    //asking user to enter an option from 1 to 5
    printf("Please enter your option 1 - 5: ");
    scanf("%s", usr_option);



    //if character are entered use (atoi) convert the ASCII value to integer
    rtn_option = atoi( usr_option);



    //while ( *usr_option = getchar() != '\n' && *usr_option != EOF );
    //print to the screen what option user entered then perform the specific option
    printf("\n*******************************************************************");
    printf("\n\tYou entered option %d\n", rtn_option);
    printf("*******************************************************************\n");

    //return user option to the main function
    return rtn_option;




}//end function display_menu


/**
    Implement function_task1() which ask user to enter a 4 digits code number from 0 - 9
    An array of integers is passing trough this function and inside the function user is asked
    to enter four digits access code from 0 - 9 and error checking is implement to check if user input is
    between 0 - 9 if its not return an error message, exit the function and the menu is displayed again
*/
void function_task1( int cpy_code[SIZE], int *option1 )
{
    //create a index variable
    int i;

    //display a message to the screen asking user to enter a 4 single digit access code
    printf("\nPlease enter your access code 0 - 9: \n");
    //create a for loop that read data from the user
    for ( i = 0; i < SIZE; i++)
    {
        //create a while loop for error checking if user enter other number from 0 - 9 then display a feedback message
        while (( scanf("%d", &*(cpy_code + i)) < 0 ) || *(cpy_code + i) > 9 )
        {
            //
            while ( getchar() != '\n' );
            //display the error message to the screen
            printf("Invalid input. Try again !!!\n");
        }//end while loop
    }//end for loop

    //print the new access code to the screen
    printf("\nYour access code is: ");

    //use the foor loop to display the content of the array
    for ( i = 0; i < SIZE; i++)
    {
        printf("%d ", *(cpy_code + i));
    }
    printf("\n");
    /**
        if function 1 finished successfully change option1_first = 1
        so that user can have the access to the other options
    */
    *option1 = 1;
} // end function_task1()

/**
    implement function_task2() which will encrypt the user access code and check if match with the
    default code 4523 then display a message to the user either the code was correct or incorrect
*/
void function_task2(int c_code[SIZE], int *option1, int *option2, int *option3, int *cnt1, int *cnt2)
{
    if ( *option1 == 1)
    {
        //declare my variables
        int i = 0;
        int temp1,temp2;
        int check = 0;

        const int access_code[SIZE] = { 4, 5, 2, 3};

        //display the access code to the screen and then display the user code
        printf("***** Default access code is: ");
        for ( i = 0; i < SIZE; i++ )
        {
            printf("%d  ", *(access_code + i));
        }
        printf(" *****\n");
        printf("*****************************************\n");
        //swap the elements of the array to encrypt the user code
        temp1 = *( c_code + 0 );
        *( c_code + 0 ) = *( c_code + 2 );
        *( c_code + 2 ) = temp1;

        temp1 = *( c_code + 1 );
        *( c_code + 1 ) = *( c_code + 3 );
        *( c_code + 3 ) = temp1;
        //print the new access code to the screen
        printf("\nYour new access code is: ");
        //create a for loop, that for every element in the array add 1 then printed to the screen
        for ( i = 0; i < SIZE; i++)
        {
            //add one to every element
            *(c_code + i ) = *(c_code + i) + 1;
            //store the new array into a temporarily  variables and if that has value 10 change it to 0
            temp1 = *(c_code + i);
            //make a condition if any element from the array have value 10 change it to 0
            if ( temp1 == 10)
            {
                *(c_code + i) = 0;
            }
            //print the new access code to the screen
            printf("%d ", *(c_code + i));
        }
        printf("\n");
        //create another for loop that will compare the user code with the default access code
        for (i=0; i<SIZE; i++)
        {
            //store the two arrays in a separate variables then check if both are matching
            temp1 = *(c_code + i);
            temp2 = *(access_code +i);
            /**
                if the array are not equal increment the check variable and then if check is greater than 0
                display error code otherwise display correct code
            */
            if (temp1 != temp2 )
            {
                check++;
            }
        }//end for loop
        //create condition to check if the user code match with the default code and if check is greater to 0 or not then display the message
        if ( check > 0)
        {
            //is check is greater than 0 display error code
            printf("\nERROR CODE\n");

            //increment times user entered the code unsuccessfully
            *cnt2 = *cnt2 + 1;

            //set option2 to 1, user can have access to see times entered the code
            *option2 = 1;
        }//end if statement
        else
        {
            //otherwise display correct code
            printf("\nCORRECT CODE\n");

            //increment times user entered the code successfully
            *cnt1 = *cnt1 + 1;
            //print to the screen if the user code has been encrypted successfully
            printf("\n***** Code has been encrypted successfully!!! *****\n");
            /**
                set the option2 equal to 1, user to be able the decrypt the code and display number of
                times entered the code successfully and incorrectly
            */
            *option2 = 1;
        }//end else statement


    }//end if statement
    else
    {
        printf("\nSorry can`t perform this option as you have to enter option 1 first\nOr access code has been encrypted already\n");
        printf("\nThank You!!!\n");
    }

}//end function_task_2()

/**
    Implement function task3 which will decrypt the user code
    This function can be use only if user encrypted the code otherwise display
    an appropriate message saying code must be encrypted first.

    This function is passing an array of integers as parameter
*/
void function_task3( int acs_code[], int *option1, int *option2, int *option3 )
{
    if ( *option1 == 1 && *option2 == 1 && *option3 == 1 )
    {
        /**
            if the access code has been encrypted successfully and user want to decrypt the code
            do the following to decrypt the code
        */
        //create my index variables
        int i;
        //create a temporary variables to swap the elements of the array
        int temp1;



        temp1 = acs_code[2] - 1;
        acs_code[2] = acs_code[0] - 1;
        acs_code[0] = temp1;

        temp1 = acs_code[3] - 1;
        acs_code[3] = acs_code[1] - 1;
        acs_code[1] = temp1;

        //create a for loop then display the decrypted code to the screen
        printf("\nThe decrypted code is: ");
        for ( i = 0; i < SIZE; i++)
        {
            //make a condition if a element from the array have value -1 change the value to 9
            if ( *(acs_code + i) == -1 )
            {
                *(acs_code + i) = 9;
            }
            //print the decrypted code
            printf(" %d ", *(acs_code + i));
        }
        printf("\n\nThe access code has been decrypted successfully.\n\n");

        //if code has been decrypted change all the options back to 0, that user cannot access the function again
        //until entered new code
        //*option1 = 0;
        //*option2 = 0;
        *option3 = 0;

    }//end if statement
    else
    {
        printf("\nSorry can`t perform this option,access code must be encrypted first\nOr maybe this option has been accessed already.\n");
        printf("Thank You!!!\n");
    }//end else statement
}

/**
    implement the function_task4() which will return an integer type and display how many times the user entered
    the code successfully and unsuccessfully
*/
void function_task4( int *option1, int *option2, int *successfully, int *unsuccessfully )
{
    //change option2 to 1 to have access this function
    //only if access code has been encrypted successfully
    *option2 = 1;

    if ( *option1 == 1 && *option2 == 1 )
    {

        printf("\nAccess code entered successfully: %d\n", *successfully);


        printf("\nAccess code entered incorrectly: %d\n", *unsuccessfully );

        //after function complete change option1 to 0 so user cannot access encrypt function
        //until another code is entered again and will be encrypted successfully
        *option1 = 0;

    }
    else
    {
        printf("\nSorry can`t access this option.\nAccess code need to encrypted first in order to access this option.\nThank You!!!\n");
    }
}


//function task five is user press five the program ends
void function_task5()
{
    printf("Program Ends!!!\nThank you for your time\n");
}

