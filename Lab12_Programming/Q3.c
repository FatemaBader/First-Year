/*Program using a function to find the highest and lowest number*/
#include <stdio.h>

int highest(int,int,int);
int lowest(int,int,int);

main()
{
    int num1,num2,num3,high,low;
    
    printf("Choose three numbers:\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    
    high= highest(num1,num2,num3);
    low=lowest(num1,num2,num3);
    
    highest(num1,num2,num3);
    printf("\nThe Highest value is %d\n\n",high);
    lowest(num1,num2,num3);
    printf("\nThe Lowest value is %d\n\n",low);    
    getchar();
    getchar();
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
int lowest(int va1,int va2,int va3)
{
    if(va1<va2)
    {
        if(va1<va3)
        {
            return(va1);
        }
        else
            return(va3);
    }
    else
        if(va2<va3)
        {
            return(va2);
        }
        else
        {
            return(va3);
        }
}

