/*Write a program using an array that will allow the user to input 3 temperature
readings in Fahrenheit. After all the temperatures have been read from the keyboard,
display each of these temperatures on the screen and its corresponding temperature in
Celsius.
Use the following formula to convert from Fahrenheit to Celsius:
Celsius = (Fahrenheit - 32.0) * (5.0 / 9.0) */

#include <stdio.h>
#define SIZE 3
main()

{
    float temps[SIZE];
    int i;
    float celcius[SIZE];
    
    for (i=0 ; i<SIZE ; i++)
    {
        scanf("%f",&temps[i]);
        printf("Fahrenheit: %f\n",temps[i]);
    }
    
    for ( i=0 ; i<SIZE ; i++)
    {
        celcius[i]=(temps[i] - 32) * (5 / 9);
        printf("Celcius: %f",celcius[i]);
    }
    getchar();
}