#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char *p= "abcd";
    while(*p)
        putchar(*p++);
    
    getchar();
    getchar();
}