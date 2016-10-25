/* A program to ask the user to enter 2 characters using the getchar() and
putchar() functions to read the characters from the keyboard and output them onto the
screen. */
#include <stdio.h>
main()
{
    
    char ch1,ch2;
    
    printf("Press a key and then press Enter ");
    ch1 = getchar(); 
    getchar();
    
    printf("Press second key and then press Enter ");
    ch2 = getchar(); 
    getchar();
    
    printf("\nYou pressed ");
    putchar(ch1);
    putchar('\n');
    
     printf("\nYou pressed ");
    putchar(ch2);
    putchar('\n');
    
    
    getchar();
    getchar();

}