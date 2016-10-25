/*Passing 1-D array*/

#include <stdio.h>
#include <stdlib.h>

int highest(int*,int);

main()
{
    int nums[5];
    int i;
    
    printf("Choose five numbers\n");
    for (i=0; i<5 ; i++)
    {
        scanf("%d",&nums[i]);
    }
    highest(nums,5);
    
    for(i=0; i<5 ; i++)
    {
        printf("New array is %d\n",nums[i]);
    }
    getchar();
    getchar();
}

int highest(int *nms,int )
{
    int i;
    for(i=0 ; i<5 ; i++)
    {
        nms[i]=nms[i]*2;
    }
    return(*nms);
}