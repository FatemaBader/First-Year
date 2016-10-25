#include <stdio.h>
#include <stdlib.h>
main()
{
    struct date_rec
    {
        int day;
        int month;
        int year;
    };
    struct date_rec current_date;
    //enter values
    printf("Please enter day, month and year");
    scanf("%d",&current_date.day);
    scanf("%d",&current_date.month);
    scanf("%d",&current_date.year);
    //add 1day
    current_date.day++;
    //display the values
    printf("Day:%d  Month:%d  Year:%d",current_date.day,current_date.month,current_date.year);
    getchar();
    getchar();
}