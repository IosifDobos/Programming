/* example of code
*/

#include <stdio.h>

int main()
{
    char name[10];
    char ch;
    int i = 0;

    printf("Enter your name: ");
    while (ch != '\n');
    {
        ch = getchar();
        name[i] = ch;
        i++;
    }
    name[i] = '\0';
    printf("name: %s", name);

    return 0;
}
