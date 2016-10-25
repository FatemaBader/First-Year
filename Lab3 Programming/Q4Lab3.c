#include <stdio.h>
main()
{
    /*A program to ask the user to enter 3 float numbers and display the 1st
correct to 4 decimal places, the 2nd correct to 3 decimal places, and the 3rd with no
decimal places on separate lines*/
    
    float v1,v2,v3;
    
    printf("Please enter three float numbers:\n");
    scanf("%f",&v1);
    scanf("%f",&v2);
    scanf("%f",&v3);
    
    printf("\nYou entered %3.4f,%3.3f and %3.0f\n",v1,v2,v3);
    
    getchar();
    getchar();
    getchar();
}

