/**
 *  Programming week 9 21.March.2017 Qustion 3
 *  Using structure design a stucture templates to store biographical data about a person
 *
 *  Program created by Iosif Dobos, C16735789 @copyright, all right are reserved
 *  Date: 21/03/2017
 *
 *  Compiler used: JetBrains CLion 2016.3.4
 */

#include <stdio.h>
#include <string.h>

//declare symbolic names
#define SIZE 31
#define MAX 1

//create the structure templates
struct date
{
    int day;
    int month;
    int year;
};
struct biographical_data
{
    int counter;
    char firstname[SIZE];
    char surname[SIZE];
    struct date DOB;
    float height;
    float weight;
    char eye_color[SIZE];
    char country_of_citizenship[SIZE];

};

//function prototype
void get_data (struct biographical_data []);
void display_data(struct biographical_data []);

//main function
int main()
{
    struct biographical_data persons[SIZE];
    struct biographical_data person2[SIZE];

    //call function get_data t enter person biographical information
    get_data( persons );

    //call function to display pers information
    display_data( persons );

    //copy data from the first person into the second person using strcpy
    strncpy( person2, persons, SIZE);

    for (int i = 0; i < MAX; ++i)
    {
        person2[i].counter = i+2;
        printf("\nPrint person d biographical details: ", person2[i].counter);
        printf("First name: %s", person2[i].firstname );
    }



    return 0;
}//end main function

void get_data ( struct biographical_data pers[SIZE])
{
    for (int i = 0; i < MAX; ++i)
    {
        pers[i].counter = i+1;

        printf("\nEnter person %d biographical details:", pers[i].counter);
        printf("\nFirstname: ");
        scanf("%s", pers[i].firstname);
        printf("\nSurname: ");
        scanf("%s", pers[i].surname);
        printf("\nDate of birth: ");
        scanf("%d", &pers[i].DOB.day);
        scanf("%d", &pers[i].DOB.month);
        scanf("%d", &pers[i].DOB.year);
        printf("Height: ");
        scanf("%.2f", pers[i].height);
        printf("\nWeight: ");
        scanf("%.2f", pers[i].weight);
        printf("\nEye color: ");
        scanf("%s", pers[i].eye_color);
        printf("\nCountry of citizenship: ");
        scanf("%s", pers[i].country_of_citizenship);
    }


}//end function get_data()

void display_data(struct biographical_data pers[SIZE])
{
    for (int i = 0; i < MAX; ++i)
    {
        //display person1 biographical details
        printf("\n\nPerson %d biographical details are: ", pers[i].counter);
        printf("\nFirst name: %s", pers[i].firstname);
        printf("\nSurname: %s", pers[i].surname);
        printf("\nDate of birth: %d / %d / %d", pers[i].DOB.day, pers[i].DOB.month, pers[i].DOB.year );
        printf("\nHeight: %.2f", pers[i].height);
        printf("\nWeight: %.2f", pers[i].weight);
        printf("\nEye color: %s", pers[i].eye_color);
        printf("\nCountry of citizenship: %s", pers[i].country_of_citizenship);
    }

}