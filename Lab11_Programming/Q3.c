#include <stdio.h>
#include <stdlib.h>
main()
{
    float *f_array;
    int no_els=5,i,total,average;
    
    f_array=(float *)calloc(no_els, sizeof(float));
    if(f_array==NULL)
        printf("Failed to allocate memory");
    else
    {
        printf("Enter the numbers into memory\n");
        
        for(i=0; i<no_els ; i++)
        {
            scanf("%f",&*(f_array+i));
            total+=*(f_array+i);
        }
        average=total/no_els;
        printf("average is %d",average);
    }
    getchar();
    getchar();
}