/* This program display 6 different problem solving
    question like: enter age to calculate the total off user hearth beats
    approximatively, asking user for degree and changing in Fahrenheit,
    displaying some variable and using scanf();
*/

#include <stdio.h>
//#include <stdlib.h>

int main()
{
    //create variables for question 2
    int first, second, third, fourth;
    float principal, rate, time;
    char keyval1, keyval2;
    char c;
    int i;
    float f;
    double d;

    //create variables for question 3
    int inverse1 = 20;
    int inverse2 = 40;
    int inverse3 = 60;
    int inverse4 = 80;

    //create variable for question 4
    float v1 = 5.0;
    float v2 = -4.5;
    float v3 = 11.25;

    // create variable for question 5
    int b_hearth = 75;
    int age;
    int total_beat;

    // create variables for question 6
    float celcius;
    float temp_f;


    // Question no 2.
    printf("Q2. Writing a single 'scanf()' statement.\n");
    printf("Please enter any 13 numbers\n");
    scanf("%d %d %d %d %f %f %f %c %c %c %d %f %lf",
          &first, &second, &third, &fourth, &principal, &rate, &time,
          &keyval1, &keyval2, &c, &i, &f, &d);

    // Question no 3.
    printf("\nQ3.Display numbers in reverse order\n");
    printf("\nThe numbers are: %d %d %d %d \n", inverse1, inverse2, inverse3, inverse4);
    printf("\nDisplaying inverse: %d %d %d %d\n", inverse4, inverse3, inverse2, inverse1);


    // Question no 4.
    printf("\nQ4.Writing a printf() to display different values:\n");
    printf("     v1 = %.0f    v2 = %.1f,     v3 = %.2f\n", v1, v2, v3);

    //Question no 5.
    printf("\nQ5.Find the apoximatelly user heart beats by introducing user age. \n");
    printf("What is your age: ");
    scanf("%d", &age);
    total_beat = (age*360*60)*b_hearth;
    printf("So far your have %d, heart beats. \n", total_beat);

    // Question no 6.
    printf("\nQ6. Write a program to display temperature in Fahrenheit.\n");
    printf("Enter a temperature in degrees Fahrenheit: ");
    scanf("%f", &temp_f);
    celcius = (temp_f - 32.0)*(5.9/9.0);
    printf("\nThe temperature is: %.2f C", celcius);




    return 0;
} //end main class
