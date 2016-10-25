/*Using a switch statement, write a program that asks the user to enter a character from
the keyboard and displays a message whether the character is a vowel (a, e, i, o, u) or
not.*/

#include <stdio.h>
main()
{
    char ch;
    
    printf("Please enter a character:");
    scanf("%c",&ch);
    
    switch (ch)
    {
        case 'a' :
            printf("%c is a vowel");
            break;
        case 'e' :
            printf("%c is a vowel");
            break;
        case 'i' :
            printf("%c is a vowel");
            break;
        case 'o' :
            printf("%c is a vowel");
            break;
        case 'u' :
            printf("%c is a vowel");
            break;
        default:
            printf("Character is NOT a vowel\n");
        
        ch=getchar();
        ch=getchar();
    }
        ch=getchar();
        ch=getchar();
        ch=getchar();
        ch=getchar();
}