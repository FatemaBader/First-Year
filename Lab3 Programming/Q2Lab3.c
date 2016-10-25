#include <stdio.h>
main()
{
    /*A program to ask the user to enter 2 characters. Display these on the screen. Change your code and
see what happens if you use %d as the delimiter for displaying these letters.
    Author: Fatema Bader 
    Date:06/10/15*/
    
    char ch1,ch2;
    
    printf("Please enter two characters:");
    scanf("%1s",&ch1);
    scanf("%1s",&ch2);
    printf("\nYou entered %c and %c\n",ch1,ch2);
    
    getchar();
    getchar();
    getchar();

}
    
    
