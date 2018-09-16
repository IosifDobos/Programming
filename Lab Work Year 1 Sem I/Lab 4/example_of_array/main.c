#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user_option;
    int index = 1;
    char f_name[50];
    char s_name[50];
    char student_n[50];
    int age[50];
    char home[50];
    char search;

    do
    {
        printf("======Menu======");
        printf("\n1. Add a new record.");
        printf("\n2. Search record by name.");
        printf("\n3. Print all records.");
        printf("\n4. Exit program.");
        printf("\n");
        printf("\nPlease enter your option from (1-4): ");
        user_option = getchar();

        printf("\n");
        printf("\nYou entered option %d", user_option);

        if (user_option < 1 || user_option > 4)
        {
            printf("\nYou need to select a number between 1 and 4.");

        }
        if (user_option == 1)
        {
            printf("\n------Adding a new record------");
            printf("\nFirst name: ");
            f_name[index] = getchar();

            printf("\nSecond name: ");
            s_name[index] = getchar();

            printf("\nAge: ");
            age[index] = getchar();

            printf("\nStudent number: ");
            student_n[index] = getchar();

            printf("\nHometown: ");
            home[index] = getchar();

            printf("\nRecord number %d added", index);
            index++;
        }
        if (user_option == 2)
        {
            printf("\n------Search record by name------");
            printf("\n");
            printf("\nPlease enter the name: ");
            search = getchar();
                for (int i=1; i<index; i++)
                {
                    if (f_name[i].contains(search))
                    {
                        printf("\nRecord number: %d", i);
                        printf("\nFirst name: %s", f_name[i]);
                        printf("\nSecond name: %s", s_name[i]);
                        printf("\nAge: %d", age[i]);
                        printf("\nStudent number: %s", student_n[i]);
                        printf("\nHometown: %s", home[i]);
                    }
                }
        }


    }while (user_option != 4);
            printf("\n------Exit Program------");

}
