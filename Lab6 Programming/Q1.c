/* A program that uses an array to read in 5 numbers. Copy the contents of this
array into another array (using only a loop remember!!).
Author: Fatema 
Date: 03/11/15*/

#include <stdio.h>
#define SIZE 5
main()
{
    int numbers[SIZE];
    int other[SIZE];
    int i;
    
    for (i=0 ; i<SIZE ; i++)
    {
        scanf("%d",&numbers[i]);
    }
    
    for (i=0 ; i<SIZE ; i++)
    {
        other[i]=numbers[i];
    }
    
    for (i=0 ; i<SIZE ; i++)
    {
        printf("%d and %d", numbers[i], other[i]);
    }
}