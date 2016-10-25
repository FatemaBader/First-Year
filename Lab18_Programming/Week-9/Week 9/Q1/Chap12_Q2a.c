/* Chapter 12 Q2A Guide to C Programming */
#include <stdio.h> 

struct data
{
    int a;
    float b;
};

main()
{    
    struct data d;
    struct data *p = &d;
    
    //part a    
    d.a = 1;
    d.b = 2.3;
    
    printf("a is %d\nb is %.1f\n\n", d.a, d.b);
    
    //reset a and b
    d.a = 0;
    d.b = 0.0;
    
    //part b
    p -> a = 1;
    p -> b = 2.3;
    
    printf("a is %d\nb is %.1f\n\n", (p -> a), (p -> b));
    
    //rest a and b
    d.a = 0;
    d.b = 0.0;
    
    //part c
    (*p).a = 1;
    (*p).b = 2.3;
    
    printf("a is %d\nb is %.1f\n", ((*p).a), ((*p).b));

    getchar();
    getchar();
}
    
    
