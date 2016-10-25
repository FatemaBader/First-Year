/*Passing 1-D array*/

#include <stdio.h>
#include <stdlib.h>

int highest(int*,int);

main()
{
    int nums[5];
    int i,high;
    
    printf("Choose five numbers\n");
    for (i=0; i<5 ; i++)
    {
        scanf("%d",&nums[i]);
    }
    high=highest(nums,5);
    
    printf("The highest number is %d",high);
    getchar();
    getchar();
}

int highest(int *nms,int )
{
    int highest,i;
    highest=nms[0];
    for(i=0 ; i<5 ; i++)
    {
        if (nms[i]>highest)
        {
            highest=nms[i];
        }
    }
    return(highest);
}