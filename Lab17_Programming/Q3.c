/*3. Using Structures, write a program to do the following:
Design structure templates, incorporating the use of nested structures, to store
biographical data about a person.
Your program must:
a) Enter data for a person's firstname, surname, date of birth, height, weight, eye
colour & country of citizenship.
b) Display the data entered.
c) Copy the data and store it in a 2nd person's record and then modify it.
d) Display the new data for the 2nd person.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    struct person
    {
        char firstn[20];
        char surn[20];
        int height;
        int weight;
        char eye_colour[20];
        char country[20];
    };
    struct person data,data1;
        
    printf("enter firstname: ");
    scanf("%s",data.firstn);
    
    printf("\nenter surname: ");
    scanf("%s",data.surn);
    

    printf("\nenter height: ");
    scanf("%d",&data.height);
    
    
    printf("enter weight: ");
    scanf("%d",&data.weight);
    
    
    printf("enter eye colour: ");
    scanf("%s",data.eye_colour);
    
    
    printf("enter country: ");
    scanf("%s",data.country);
    
    //display data entered
    printf("%s",data.firstn);
    printf("%s",data.surn);
    printf("%d",data.height);
    printf("%d",data.weight);
    printf("%s",data.eye_colour);
    printf("%s",data.country);
    
    //copy data values into data1 values and modify
    data1=data;
    strcpy(data1.country,"russia");
    
    //display new values for data1
    printf("%s",data1.firstn);
    printf("%s",data1.surn);
    printf("%d",data1.height);
    printf("%d",data1.weight);
    printf("%s",data1.eye_colour);
    printf("%s",data1.country);
    
    getchar();
    getchar();
}