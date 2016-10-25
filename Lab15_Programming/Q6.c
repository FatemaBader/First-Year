#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char *name="fatema";
    gets(name);
    puts(name);
    printf("2. %c %c %c %c %c %c",*name,*(name+1),*(name+2),*(name+3),*(name+4),*(name+5));
    getchar();
}