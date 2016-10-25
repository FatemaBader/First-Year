
#include <stdio.h>
int check(int);

main()
{
    int num1,r1;
    
    printf("Enter any number:\n");
    scanf("%d",&num1);
    r1=check(num1);
    printf("return %d",r1);
    getchar();
    getchar();
}
int check(int n1)
{
    if (n1%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
    