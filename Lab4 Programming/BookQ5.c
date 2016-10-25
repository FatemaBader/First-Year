/*In a triangle, the sum of any two sides must be greater than the third side. 
Write a program to input three numbers and determine if they form a valid triangle*/

#include <stdio.h>
main()
{
    int num1,num2,num3;
    
    printf("Please type in your three side values for the triangle:\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    

    if(num1+num2>num3 && num2+num3>num1 && num1+num3>num2)
        printf("This is a valid triangle\n");
    else
        printf("This does NOT form a valid triangle");

    
    num1=getchar();
    num2=getchar();
    
   
}