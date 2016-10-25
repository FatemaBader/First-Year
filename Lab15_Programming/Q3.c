#include <stdio.h>
#include <stdlib.h>
main()
{
    char *text= "some text";
    printf("1. %s\n",text); //array same as first element
    printf("2. %c\n",*text);
    printf("3. %c\n",*"more text");
    printf("4. %c\n",*(text+1) ); //second position
    printf("5. %s",text+1);
    printf(text);
    *(text+4)='\0'; printf("7. \n%s\n",text);
    printf("8. %c","text"[2]);
    printf("9. %s","text"+2);
    getchar();
    
}