#include <stdio.h>

int highest(int,int,int);
main()
{
    int num1,num2,num3,h;
    
    printf("Choose three numbers:\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    h=highest(num1,num2,num3);
    printf("Highest is %d",h);
}
int highest(int val1,int val2,int val3)
{
    if(val1>val2)
    {
        if(val1>val3)
        {
            return(val1);
        }
        else
            return(val3);
    }
    else
        if(val2>val3)
        {
            return(val2);
        }
        else
        {
            return(val3);
        }
}