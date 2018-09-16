/**
 * Lab work week 9 Programming, question 5
 *
 * Program created by Iosif Dobos, C16735789, @copyright all right are reserved
 * Date: 30/03/2017
 */

#include <stdio.h>

//declare symbolic names
#define SIZE 2
#define MAX 31

//declare my structure templates
struct city
{
    int counter;
    char city_name[MAX];
    float population;
    float rainfall;
    float sunshine;
};
//declare my function prototype
void get_details ( struct city []);
void display_details ( struct city[]);

//main function
int main()
{
    //declare my array of structure variable
    struct city city_details[SIZE];

    //call function to read data from the user
    get_details( city_details );

    //call function to display user details
    display_details( city_details );


    return 0;
}//end main() function

/**
 * Implement function get_details to read data from the user
 */
void get_details ( struct city city_det[SIZE])
{
    //create a for loop to read data from the user
    for (int i = 0; i < SIZE; ++i)
    {
        city_det[i].counter = i + 1;

        printf("\nEnter details for city %d", city_det[i].counter);
        printf("\n");
        printf("\nEnter the name of the city: ");
        gets( city_det[i].city_name);
        printf("\nEnter the population: ");
        scanf("%f", &city_det[i].population);
        printf("\nEnter annual rainfall(mm): ");
        scanf("%f", city_det[i].rainfall);
        printf("\nEnter annual sunshine(hours): ");
        scanf("%f", city_det[i].sunshine);

    }//end for loop
}//end get_details() function

/**
 * Implement function display_details() that will display the city details
 */
void display_details ( struct city city_det[SIZE])
{
    //create a loop that will display the city details
    for (int i = 0; i < SIZE; ++i)
    {
        city_det[i].counter = i + 1;
        printf("City %d details are: ", city_det[i].counter);
        printf("\n");
    }
}
