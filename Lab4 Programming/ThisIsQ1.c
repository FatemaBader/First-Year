/*Using a switch statement, write a program that asks the user to enter a character from
the keyboard and displays a message whether the character is a vowel (a, e, i, o, u) or
not.*/

#include <stdio.h>
main()
{
    char ch;
    
    printf("Please enter a character:");
    scanf("%1s",&ch);
    
    switch (ch)
    {
        case 'a' :
            printf("%c is a vowel",a);
            break;
        case 'e' :
            printf("%c is a vowel",e);
            break;
        case 'i' :
            printf("%c is a vowel",i);
            break;
        case 'o' :
            printf("%c is a vowel",o);
            break;
        case 'u' :
            printf("%c is a vowel",u);
            break;
        default:
            printf("Character is NOT a vowel\n");
    }
}