/* A C program that uses a structure to store the details for a city */
#include <stdio.h>

struct details
{
    char name [58];
    unsigned int pop;
    int rainfall;
    int sunshine;
};

main()
{
    struct details city1;
    struct details city2;
    struct details *ptr1;
    struct details *ptr2;
        
    ptr1 = &city1;
    ptr2 = &city2;
        
    printf("Please Enter Details for the first city\n\n");
    
    printf("Please Enter the City name: ");
    scanf("%20s", ptr1 -> name);
    
    printf("Please Enter the City popculation: ");
    scanf("%d", &ptr1 -> pop);
    
    printf("Please Enter the Annual Rainfall in mm: ");
    scanf("%d", &ptr1 -> rainfall);
    
    printf("Please Enter the Annual Sunshine in hours: ");
    scanf("%d", &ptr1 -> sunshine);
    
    
    printf("\nPlease Enter Details for the second city\n\n");
    
    printf("Please Enter the City name: ");
    scanf("%20s", ptr2 -> name);
    
    printf("Please Enter the City popculation: ");
    scanf("%d", &ptr2 -> pop);
    
    printf("Please Enter the Annual Rainfall in mm: ");
    scanf("%d", &ptr2 -> rainfall);
    
    printf("Please Enter the Annual Sunshine in hours: ");
    scanf("%d", &ptr2 -> sunshine);
    
    //Display info
    printf("City 1:\n");
    printf("City name: %s\n", ptr1 -> name);
    printf("City population: %l\n", ptr1 -> pop);
    printf("City Annual Rainfall: %d mm\n", ptr1 -> rainfall);
    printf("City Annual Sunshine: %d hours\n", ptr1 -> sunshine);
    
    printf("\nCity 2:\n");
    printf("City name: %d\n", ptr2 -> name);
    printf("City population: %d\n", ptr2 -> pop);
    printf("City Annual Rainfall: %d mm\n", ptr2 -> rainfall);
    printf("City Annual Sunshine: %d hours\n", ptr2 -> sunshine);
    
    //Compare info
    if (ptr1 -> rainfall > ptr2 -> rainfall)
    {
        printf("\nThe city with the highest annual rainfall is %s", ptr1 -> name);
    }
    else
    {
        printf("\nThe city with the highest annual rainfall is %s", ptr2 -> name);
    }
    
    if (ptr1 -> sunshine < ptr2 -> sunshine)
    {
        printf("\nThe city with the lowest annual sunshine is %s", ptr1 -> name);
    }
    else
    {
        printf("\nThe city with the lowest annual sunshine is %s", ptr2 -> name);
    }
    
    getchar();
    getchar();
}
