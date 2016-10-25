#include <stdio.h>
#include <stdlib.h>
main()
{
    int *int_array;
    int no_els, no_bytes,i;
    
    printf("number of elements");
    scanf("%d",&no_els);
    
    no_bytes= no_els * sizeof(int);
    
    int_array=(int *) malloc(no_bytes);
    if(int_array==NULL)
        printf("cannot allocate memory");
    else
    {
        for(i=0 ; i<no_els ; i++)
        {
            printf("enter element %d",i);
            scanf("%d",int_array+i);
        }
        for (i=0 ; i<no_els ; i++)
            printf("Element %d is %d\n", i, *(int_array+i));
        
        free(int_array);
    }
    getchar();
    getchar();
}