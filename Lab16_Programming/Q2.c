/*A program that reads a sentence 
from the keyboard and uses separate functions*/
/*Write a program that reads a sentence from the keyboard and uses separate functions
to do the following:
a) Determines the frequency of the word “is” in the sentence (ensure the string
contains at least 1 occurrence of this word).
b) Calculates the number of characters in the sentence.
c) Appends the sentence to the end of the following string: “My sentence is : “ */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void freq(char[],char[]);
main()
{
    char sentence[50];
    char word[3]="is";
    
    printf("Enter your sentence\n");
    gets(sentence);
    
    freq(sentence,word);
    getchar();
}

void freq(char sent[], char wrd[])
{
    int count=0;
    int len,i;
    len=strlen(sent);
    
    for(i=0;i<len;i++) // as long as i is less than the strings length
    {
        if (strcmp(sent,wrd) ==0)
        {
            count++;
        }
    }
        printf("The word 'is' is found %d times",count);
    getchar();
}