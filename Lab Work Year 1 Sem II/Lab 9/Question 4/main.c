/**
 * Question 4 Week 9 Programming lab
 * Created by Iosif Dobos, C16735789 @copyright, all rights are reserved
 * Date: 30/03/2017
 */

#include <stdio.h>

//declare symbolic name
#define SIZE 3
#define MAX 21

//declare structure templates
struct date
{
    int day;
    int month;
    int year;
};
struct biographical_details
{
    int counter;
    char firstname[MAX];
    char surname[MAX];
    struct date DOB;
    float height;
    float weight;
    char eye_color[MAX];
    char country[MAX];
};

//declare function prototype
void get_details ( struct biographical_details[]);
void display_details (struct biographical_details []);

//main function()
int main()
{
    struct biographical_details person[SIZE];

    //call function to get data from the user
    get_details( person );

    //display user data entered
    display_details( person );

   return 0;

}//end main function

/**
 * Get biographical data from the user using a for loop
 */
void get_details (struct biographical_details pers[])
{
    //create a for loop to read data from the user
    for (int i = 0; i < SIZE; ++i)
    {
        pers[i].counter = i+i;
        printf("Enter details for person %d", pers[i].counter);
        printf("\nEnter first name: ");
        gets( pers[i].firstname);
        printf("\nEnter surname: ");
        gets( pers[i].surname);
        printf("\nEnter date of birth (dd/mm/yyyy): ");
        scanf("%d", &pers[i].DOB.day);
        scanf("%d", &pers[i].DOB.month);
        scanf("%d", &pers[i].DOB.year);
        printf("\nEnter height: ");
        scanf("%f", &pers[i].height);
        printf("\nEnter weight: ");
        scanf("%f", &pers[i].weight);
        printf("Enter eye color: ");
        gets( pers[i].eye_color);
        printf("\nEnter country of citizenship: ");
        gets( pers[i].country);

    }//enf for loop

}//end get_details() function

/**
 * Display all the persons biographical details
 */
void display_details ( struct biographical_details pers[SIZE])
{
    //using a for loop to display all the 3 person details
    for (int i = 0; i < SIZE; ++i)
    {
        printf("\nPerson %d biographical details are: \n", (pers[i].counter ++));
        printf("\n");
        printf("\nFirst name: %s", pers[i].firstname);
        printf("\nSurname: %s", pers[i].surname);
        printf("\nDate of birth: %d/%d/%d", pers[i].DOB.day, pers[i].DOB.month,pers[i].DOB.year);
        printf("\nHeight: %.2f", pers[i].height);
        printf("\nWeight: %.2f", pers[i].weight);
        printf("\nEye color: %s", pers[i].eye_color);
        printf("\nCountry of citizenship: %s", pers[i].country);
    }//end for loop
}//end display_details() function

