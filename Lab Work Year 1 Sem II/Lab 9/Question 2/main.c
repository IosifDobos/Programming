/**
 *  Programming week 9 21.March.2017 Qustion 2
 *  Using structure create a program that will store:
 *          - Airline name
 *          - Flight number
 *          - Passenger surname
 *          - Seat Number
 *          - Destination
 *          - Number of bags
 *  The program will take information for 3 passengers and then will display the passenger details
 *
 *  Program created by Iosif Dobos, C16735789 @copyright, all right are reserved
 *  Date: 21/03/2017
 *
 *  Compiler used: JetBrains CLion 2016.3.4
 */

#include <stdio.h>

//declare symbolic names
#define SIZE 3
#define FLIGHT 21

//create the structure templates
struct Flight_data
{
    int passenger;
    char airline_name[FLIGHT];
    char flight_no[FLIGHT];
    char surname[FLIGHT];
    char seat_no[FLIGHT];
    char destination[FLIGHT];
    int no_of_bags;
};

//function prototype
void passengers_details( struct Flight_data [] );
void display_details( struct Flight_data []);

//main function
int main()
{
    //declaring my array of structure
    struct Flight_data passengers[SIZE];


    //call function passengers_details
    passengers_details( passengers );

    //call function display_details to display the passengers details
    display_details( passengers );


    return 0;
}//end function main()

/**
 * Implement function passenger_details() that will enter data from 3 different passenger
 */
void passengers_details( struct Flight_data passengers_det[SIZE])
{
    //declare my index variable
    int i;
    //enter passenger1 flight details
    for ( i = 0; i <SIZE ; ++i)
    {
        passengers_det[i].passenger = i+1;

        printf("Enter passenger %d details information: ", passengers_det[i].passenger);
        printf("\nAirline name: ");
        scanf("%s", passengers_det[i].airline_name);
        printf("\nFlight number: ");
        scanf("%s", passengers_det[i].flight_no);
        printf("\nSurname: ");
        scanf("%s", passengers_det[i].surname);
        printf("\nSeat number: ");
        scanf("%s", passengers_det[i].seat_no);
        printf("\nDestination: ");
        scanf("%s", passengers_det[i].destination);
        printf("\nNumber of bags: ");
        scanf("%d", &passengers_det[i].no_of_bags);
        printf("\n");

    }//end for loop




}//end function passengers_details()

/**
 *  Implement function display_details(), this function will display the passenger 1 data that was entered
 */
void display_details(struct Flight_data display_det[SIZE])
{
    for (int i = 0; i < SIZE ; ++i)
    {
        printf("\nPassenger %d details information:", display_det[i].passenger);
        printf("\n");
        printf("\nAirline name: %s", display_det[i].airline_name);
        printf("\nFlight number: %s", display_det[i].flight_no);
        printf("\nPassenger surname: %s", display_det[i].surname);
        printf("\nSeat number: %s", display_det[i].seat_no);
        printf("\nDestination: %s", display_det[i].destination);
        printf("\nNumber of bags: %d", display_det[i].no_of_bags);
        printf("\n");

    }//end for loop

}//end function display_details()
