#include <stdio.h>
#include <string.h>

main()
{
    char *country[10]={"Australia","Belgium","China","Denmark","England","France","Greece","Ireland","Scotland","Wales"};
    char *capital[10]={"Canberra","Brussels","Beijing","Copenhagen","London","Paris","Athens","Dublin","Edinburgh","Cardiff"};
    char name[12]; //name of country
    int i;
        
    printf("Choose a country\n");
    gets(name);
    
    for (i=0;i<10;i++)
    {
        if (strcmp ( *(country+i), name) ==0 )
        {
            printf("%s\n",*(capital+i));
        }
    }
    getchar();
    getchar();
}