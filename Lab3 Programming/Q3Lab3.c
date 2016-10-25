

#include <stdio.h>
main()
{

/*A program that asks the user to enter an integer between 1 and 100. Check
whether the integer is even or odd and print a message on the screen stating "Number
x is Even" or "Number y is Odd".*/
    
    int v1;
    
    printf("Pick a number between 1 and 100\n");
    scanf("%d",&v1);
    
    if (v1%2 == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
            
    
    getchar();
    getchar();
    getchar();
}