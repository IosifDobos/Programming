#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chars[] = {'a', ' ','b', ' ' , 'c', ' ' , ' ' , 'd'};
    char i=0;

    for (i=0; i<chars; i++)
    {
        printf("%c", chars[i]);
    }


    return 0;
}
