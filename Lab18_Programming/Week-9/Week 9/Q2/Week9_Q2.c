/* A C program that uses structures and functions */
#include <stdio.h>

struct plane_info
{
    char name [20];
    int fnum;
    char psurname [20];
    int snum;
    char dest [20];
    int bnum;
};

void get_info (struct plane_info*);
void display_info (struct plane_info);
    
main()
{
    struct plane_info plane1;
    struct plane_info *ptr;
        
    ptr = &plane1;
    
    get_info (ptr);
    
    printf("\n\n");
    
    display_info (plane1);
    
    getchar();
    getchar();
}

void get_info (struct plane_info *p)
{
    printf("Enter Plane Information:\n\n");
    
    printf("Please Enter the Plane name: ");
    gets(p -> name);
    
    printf("Please Enter the Flight Number: ");
    scanf("%d", &p -> fnum);
    
    getchar();
    
    printf("Please Enter the Passengers Surname: ");
    gets(p -> psurname);
    
    printf("Please Enter their Seat Number: ");
    scanf("%d", &p -> snum);
    
    getchar();
    
    printf("Please Enter the Destination of the Plane: ");
    gets(p -> dest);
    
    printf("Please Enter the Number of Bags on the Plane: ");
    scanf("%d", &p -> bnum);
}

void display_info (struct plane_info p1)
{
    printf("The Plane Information is as follows:\n\n");
    
    printf("The Plane Name is: ");
    puts(p1.name);
    
    printf("The Flight Number is: %d\n", p1.fnum);
    
    printf("The Passenger Surname is: ");
    puts(p1.psurname);
    
    printf("The Passengers Seat Number is: %d\n", p1.snum);
    
    printf("The Flight Destination is: ");
    puts(p1.dest);
    
    printf("The Number of Bags is: %d\n", p1.bnum);
}