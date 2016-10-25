#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char *text= "abcd";
    char *p=text;
    p +=strlen(p) -1;
    while (text <= p)
        puts(p--);
    
    getchar();
}