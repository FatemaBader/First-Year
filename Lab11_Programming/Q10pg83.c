#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 9
main()
{
    char chars[9] = {'a','','b','','c','','','d'};
    int i;
    
    for(i=0 ; i<SIZE ; i++)
    {
        if(chars[i]==NULL)
        {
            chars[i]='_';
        }
    }
        for (i=0 ; i<SIZE ; i++)
        {
            printf("Element %d is %d\n", i, chars[i]);
        }
    getchar();
    getchar();
}