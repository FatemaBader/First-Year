/*Program using a function with two parameters*/
#include <stdio.h>

void stars(int,char);

main()
{
    int input=0;
    char m_char;
    
    printf("enter a number:\n");
    scanf("%d",&input);
    
    printf("enter a character:\n");
    scanf("%1s",&m_char);
    
    stars(input,m_char);
}
void stars(int num, char my_char)
{
    int i;
    
    for (i=0 ; i<num ; i++)
    {
        printf("%c",my_char);
    }
    getchar();
    getchar();
}