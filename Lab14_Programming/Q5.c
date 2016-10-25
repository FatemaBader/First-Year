/*Passing 1-D array*/

#include <stdio.h>
#include <stdlib.h>

int array(int*,int);

main()
{
    int nums[5];
    int i,even;
    
    printf("Choose five numbers\n");
    for (i=0; i<5 ; i++)
    {
        scanf("%d",&nums[i]);
    }
    even=array(nums,5);
    
        printf("%d numbers are even\n",even);
    
    getchar();
    getchar();
}

int array(int *nms,int )
{
    int i,even=0;
    for(i=0 ; i<5 ; i++)
    {
        if(nms[i]%2==0)
        {
            printf("%d is even\n",nms[i]);
            even++;
        }
        else
        {
            printf("%d is odd\n",nms[i]);
        }
    }
    return(even);
}