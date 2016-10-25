/*Using switch statements Q1 page 44 in the book
Author:Fatema Bader
Date:13 oct 2015*/

#include <stdio.h>
main()
{
    char marriage_status;
    
    printf("please enter marriage status:\n");
    scanf("%c",&marriage_status);
    
    switch(marriage_status)
    {
        case 'S':
        case 's':
            printf("marriage_status: single");
            break;
        
        case 'M':
        case 'm':
            printf("marriage_status:married");
            break;
        
        case 'W':
        case 'w':
            printf("marriage_status:widowed");
            break;
        
        case 'E':
        case 'e':
            printf("marriage_status:separated");
            break;
        
        case 'D','d':
            printf("marriage_status:divorced");
            break;
        
        default:
            printf("error:invalid code");
    }
    getchar();
    getchar();
    getchar();
}