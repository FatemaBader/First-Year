/*Program that uses two functions (1 function to calculate area of a sq.
another function to calc area of a circle*/

#include <stdio.h>
#include <stdlib.h>

void square(int *);
void circle(int *);
    
main()
{
    int length;
    int radius;
    
    printf("Enter a value for length\n");
    scanf("%d",&length);
    printf("Enter a value for radius\n");
    scanf("%d",&radius);
    
    square(&length);
    circle(&radius);
    printf("Area of a square is %d\n\n",length);
    printf("Area of a circle is %d",radius);
    getchar();
    getchar();
}

void square(int *len)
{
    *len=(*len)*(*len);
}

void circle(int *rad)
{
    *rad=(3.14)*(*rad)*(*rad);
}