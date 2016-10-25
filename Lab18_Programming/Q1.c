/*
LAB18
Q2 BOOK Ch.12
*/
#include <stdio.h>
#include <stdlib.h>

main()
{ 
    struct data
    {
        int a;
        float b;
    };
    struct data d, *p=&d ;
       
    d.a=1;
    d.b=2.3;
    printf("%d  %.1f\n",d.a,d.b);
    
    p->a=1;
    p->b=2.3;
    printf("%d  %.1f\n",p->a,p->b);
    
    (*p).a=1;
    (*p).b=2.3;
    printf("%d  %.1f\n",(*p).a,(*p).b);
    
    getchar();
    getchar();
}