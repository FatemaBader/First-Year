#include <stdio.h>
#include <stdlib.h>
main()
{
    float litres[]= {11.5,11.21,12.7,12.6,12.4};
    float miles[]= {471.5,358.72,495.3,453.6,421.6};
    int mpl[5];
    
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