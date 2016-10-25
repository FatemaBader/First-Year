/* A C problem involving structure templates incorporating the use of nested structures to store
biographical data about a person */
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
    struct data person1;
    struct data person2;
    

    //Get Data
    printf("Please Enter the Person's Firstname: ");
    scanf("%20s", person1.firstname);
    
    printf("Please Enter the Person's Surname: ");
    scanf("%20s", person1.surname);
    
    printf("Please Enter the Person's Date of Birth (DD/MM/YYYY): ");
    scanf("%d", &person1.dob.day);
    printf("/");
    scanf("%d", &person1.dob.month);
    printf("/");
    scanf("%d", &person1.dob.year);
    
    printf("\nPlease Enter the Person's Height: ");
    scanf("%f", &person1.height);
    
    printf("Please Enter the Person's Weight: ");
    scanf("%f", &person1.weight);
    
    printf("Please Enter the Person's eye color: ");
    scanf("%10s", person1.eye_colour);

    printf("Please Enter the Person's Country of Citizenship: ");
    scanf("%20s", person1.COC);
    
    //Display Data
    printf("Person 1's Data as Follows: \n\n");
    
    printf("Firstname: %s\n", person1.firstname);
    printf("Surname: %s\n", person1.surname);
    printf("Date of Birth: %d/%d/%d\n", person1.dob.day, person1.dob.month, person1.dob.year);
    printf("Height: %.1f\n", person1.height);
    printf("Weight: %.1f\n", person1.weight);
    printf("Eye Colour: %s\n", person1.eye_colour);
    printf("Country of Citizenship: %s\n", person1.COC);
    
    //Copy the Data into person2
    person2=person1;
    
    //Modify some of the Data in person2
    strcpy(person2.firstname, "Mark");
    person2.dob.year = 2002;
    strcpy(person2.eye_colour, "Blue");
    
    //Display person2's information
    printf("\nPerson 2's Data as Follows: \n\n");
    
    printf("Firstname: %s\n", person2.firstname);
    printf("Surname: %s\n", person2.surname);
    printf("Date of Birth: %d/%d/%d\n", person2.dob.day, person2.dob.month, person2.dob.year);
    printf("Height: %.1f\n", person2.height);
    printf("Weight: %.1f\n", person2.weight);
    printf("Eye Colour: %s\n", person2.eye_colour);
    printf("Country of Citizenship: %s\n", person2.COC);

    getchar();
    getchar();
}
