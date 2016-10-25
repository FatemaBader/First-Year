/*Program using a function to print stars*/
#include <stdio.h>

void stars(void);

main()
{
    int counter;
    
    for (counter=0 ; counter<10 ; counter++)
        putchar('*');
    getchar();
}