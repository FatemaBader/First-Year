/* A C problem using an array of structures instead of 3 seperate variables to store and access information*/
#include <stdio.h>
#include <string.h>

struct date
{
    int day;
    int month;
    int year;
};

struct data
{
    char firstname [20];
    char surname [20];
    struct date dob;
    float height;
    float weight;
    char eye_colour [10];
    char COC [20];
};

main()
{
    struct data person[3];
    int i;
    

    //Get Data for each person
    for (i=0; i<3; i++)
    {
        printf("\nPlease Enter Date for Person %d\n\n", (i+1));
        
        printf("\nPlease Enter the Person's Firstname: ");
        scanf("%20s", person[i].firstname);
    
        printf("Please Enter the Person's Surname: ");
        scanf("%20s", person[i].surname);
    
        printf("Please Enter the Person's Date of Birth (DD/MM/YYYY): ");
        scanf("%d", &person[i].dob.day);
        printf("/");
        scanf("%d", &person[i].dob.month);
        printf("/");
        scanf("%d", &person[i].dob.year);
    
        printf("\nPlease Enter the Person's Height: ");
        scanf("%f", &person[i].height);
    
        printf("Please Enter the Person's Weight: ");
        scanf("%f", &person[i].weight);
    
        printf("Please Enter the Person's eye color: ");
        scanf("%10s", person[i].eye_colour);

        printf("Please Enter the Person's Country of Citizenship: ");
        scanf("%20s", person[i].COC);
    }
    
    for (i=0; i<3; i++)
    {
        printf("\nPerson %d's Data as Follows: \n\n", (i+1));
    
        printf("Firstname: %s\n", person[i].firstname);
        printf("Surname: %s\n", person[i].surname);
        printf("Date of Birth: %d/%d/%d\n", person[i].dob.day, person[i].dob.month, person[i].dob.year);
        printf("Height: %.1f\n", person[i].height);
        printf("Weight: %.1f\n", person[i].weight);
        printf("Eye Colour: %s\n", person[i].eye_colour);
        printf("Country of Citizenship: %s\n", person[i].COC);
    }
    
    getchar();
    getchar();
}