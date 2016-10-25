#include <stdio.h>
#include <string.h>
#define NUMS 5
main()
{
    //array of strings
    char *names[NUMS]={"fatema","thomas","daragh","sylvia","lynn"};
    char name[12];
    int i,n=0;
    
    printf("Enter name\n");
    gets(name);
    
    for(i=0;i<NUMS;i++)
    {
        if ( strcmp(*(names+i),name)==0 )
        {
            n++;
        }
    }
    if(n==1)
    {
        printf("name found!");
    }
    else
    {
        printf("not found");
    }
    getchar();
    getchar();
    
}