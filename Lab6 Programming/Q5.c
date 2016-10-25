/* 6. a program to read numbers into an array of 3 integers. Your program must sort
the array in ascending order (i.e. the first element is the smallest and each element
after the first is greater than or equal to the element before it).
*/

#include <stdio.h>
#define SIZE 3
main()

{
    int nums[SIZE];
    int i,smallest,biggest;
    
    for ( i=0 ; i<SIZE ; i++ )
    {
        scanf("%d",&nums[i]);
    }
    biggest=nums[0];
    smallest=nums[0];
    
    for ( i=0 ; i<SIZE ; i++ )
    {
        if (biggest < nums[i])
        {
            biggest=nums[i];
        }
        if (smallest>nums[i])
        {
            smallest=nums[i];
        }
    }
    printf("\n %d \n %d", smallest, biggest);
    
    getchar();
    getchar();
}