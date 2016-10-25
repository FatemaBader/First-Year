#include <stdio.h>
main()
{
    int v1,v2;
    
    printf("Please enter two integers:\n");
    scanf("%d""%d",&v1,&v2);
    
    if (v1%v2==0)
        printf("%d is evenly divisible by %d\n",v1,v2);
    else
        printf("\n%d is not evenly divisible by %d\n",v1,v2);
    getchar();
    getchar();
}