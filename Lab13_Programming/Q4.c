#include <stdio.h>

char fxn(char,char,char);
main()
{
    char ch1,ch2,ch3,h;
    
    printf("Choose three numbers:\n");
    scanf("%1s",&ch1);
    scanf("%1s",&ch2);
    scanf("%1s",&ch3);
    h=fxn(ch1,ch2,ch3);
    printf("Most common is %1s",h);
}
char fxn(char c1,char c2,char c3)
{
   if (c1==c2)
    {
        return(c1);
    }
    else if (c2==c3)
    {
        return(c2);
    }
    else 
       return(c3);
}