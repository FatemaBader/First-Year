#include <stdio.h>
#include <stdlib.h>
main()
{
    float *float_array;
    int no_els, i;
    
    printf("number of elements");
    scanf("%d",&no_els);
    
    float_array=(float *) calloc(no_els,sizeof(float));
    if(float_array==NULL)
        printf("cannot allocate memory");
    else
    {
        for (i=0 ; i<no_els ; i++)
            printf("Element %d is %.1f\n", i, float_array[i]);
        
        free(float_array);
    }
    getchar();
    getchar();
}