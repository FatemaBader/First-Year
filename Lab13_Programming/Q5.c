#include <stdio.h>

void fxn(int);
main()
{
    int a=1;
    
    printf("a is here\n",a);
    fxn(a);
    printf("a is still",a);
}
void fxn(int v)
{
    v=v+2;
    printf("v is now %d\n",v);
}