#include <stdio.h>
#define SIZE 3
int average(int,int,int);
main()
{
    int num1,num2,num3,av;
    
    printf("Choose three numbers:\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    
    av=average(num1,num2,num3);
    printf("Average is %d",av);
}
int average(int n1,int n2,int n3)
{
    int total,avg;
    
    total=n1+n2+n3;
    avg=total/(SIZE); 
    return(avg);
}