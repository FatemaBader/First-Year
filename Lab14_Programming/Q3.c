#include <stdio.h>
#include <stdlib.h>

int avg(int*,int);

main()
{
    int nums[5];
    float average;
    int i;
    
    printf("Choose five numbers\n");
    for (i=0; i<5 ; i++)
    {
        scanf("%d",&nums[i]);
    }
    average=avg(nums,5);
    
    printf("The average number is %.1f",average/5 );
    getchar();
    getchar();
}

int avg(int *nms,int )
{
    int sum=0,i;
    
    for(i=0 ; i<5 ; i++)
    {
        sum+=nms[i];
    }
    return(sum);
}