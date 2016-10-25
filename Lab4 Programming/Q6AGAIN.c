
#include <stdio.h>
main()
{
    
char ch;

    printf("Please enter a number between\n ");
    scanf("%1s",&ch);

    switch(ch)
    {
        case '1':
            printf("one");
            break;
        case '2':
            printf("two");
            break;
        case '3':
            printf("three");
            break;
        case '4':
            printf("four");
            break;
        case '5':
            printf("five");
            break;
        case '6':
            printf("six");
            break;
        case '7':
            printf("seven");
            break;
        case '8':
            printf("eight\n");
            break;
        case '9':
            printf("nine\n");
            break;
        default:
            printf("invalid input\n");
    }

    getchar();
    getchar();
    return 0;
}