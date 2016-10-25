/* Q3. A program. User inputs 2words. Compares 2words.
display whether the 2words are the same*/
/*4. Using separate functions for part (a) and (b) below, 
extend your program in Q3 to do the following:
a) Concatenate the first word entered to the end of the string: 
"First word entered is ". Display this entire string on the screen.
b) Calculate the length of the string in part (a) above and display the number of
characters used. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void conc(char[],char[]);
void len(char[]);
main()
{
    char word1[20];
    char word2[20];
    char str1[30]="First word entered is ";
    
    
    printf("Please enter your 2 weords\n");
    gets(word1); gets(word2);
     if(strcmp(word1,word2)==0)
     {
         printf("The words are the same.");
     }
     else
     {
         printf("The words are not the same.");
     }
     conc(str1,word1);
     
     getchar();
     getchar();
}
void conc(char string[], char word[])
{
    strcat(string,word);
    printf("\n%s",string);
    len(string);
}
void len(char full[])
{
    strlen(full);
    printf("\nLength:%d",strlen(full));
    
}