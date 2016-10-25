/*Program using a function with two parameters*/
#include <stdio.h>

void sum(int,int,int);
void average(int);
main()
{
    int num1,num2,num3;
    
    printf("Choose three numbers:\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    
    sum(num1,num2,num3);

    getchar();
    getchar();
}
void sum(int n1,int n2,int n3)
{
    int total;
    
    total=n1+n2+n3;

    average(total);
}
void average(int tsum)
{
    int avg;
    
    avg=tsum/3;
    
    printf("Average of three number is %d",avg);
}
