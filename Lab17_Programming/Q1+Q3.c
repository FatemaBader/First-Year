/*Q1 Ch.12 and Q3*/
#include <stdio.h>
#include <stdlib.h>
main()
{
    //structure template
    struct stock
    {
        int stock_number;
        char stock_description[20];
        int stock_quantity;
    };
    struct library_book
    {
        char ISBN[14];
        char title[31];
        char author[26];
        float price;
    };
    struct customer
    {
        unsigned int cust_number;
        char name[26];
        char addressp[46];
        double outstanding_balance;
    };
    //Q3
    struct stock_record
    {
        int no;
        char description[21];
        float price;
        int qy;
    };
    
    struct stock_record stock_item;
    //assign a value to each member
    stock_item.no=2;
    strcpy(stock_item.description,"short");
    stock_item.price=9.00;
    stock_item.qty=5;
    //input a value to each member
    scanf("%d",&stock_item.no);
    scanf("%20s",stock_item.description);
    scanf("%f",&stock_item.price);
    scanf("%d",&stock_item.qy);
    //display value of each member
    printf("%d\n"stock_item.no);
    printf("%s\n",stock_item.description);
    printf("%f\n",stock_item.price);
    printf("%d\n",stock_item.qy);
}
