#include <stdio.h>
main()
{
    /*A program to ask the user to enter 3 numbers and display on separate lines
    Author: Fatema Bader 
    Date:06/10/15*/
    
    int v1,v2,v3;
    
    printf("Enter 3 numbers and then press the Enter key after each number:");
    scanf("%d",&v1);
    scanf("%d",&v2);
    scanf("%d",&v3);
    printf("\nThe numbers you have typed are %d,%d and %d\n",v1,v2,v3);
    
    
    getchar();
    getchar();
    getchar();
}