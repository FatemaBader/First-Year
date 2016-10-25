#include <stdio.h>
#include <stdlib.h>
void get(struct data*);
void display(struct data*);
struct data
{
    char name[11];
    int num;
    char sname[11];
    int snum;
    char dest[11];
    int bags;
};
main()
{
    struct data passenger[3];
    get(passenger);
    display(passenger);
    getchar();
    getchar();
}
void get(struct data *passenger)
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("Name:");
        scanf("%s",passenger[i].name);
        printf("Num:");
        scanf("%d",&passenger[i].num);
        printf("sname:");
        scanf("%s",passenger[i].sname);
        printf("snum:");
        scanf("%d",&passenger[i].snum);
        printf("dest:");
        scanf("%s",passenger[i].dest);
        printf("Bags:");
        scanf("%d",&passenger[i].bags);
    }
}
void display(struct data *passenger)
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("Name:");
        printf("%s",passenger[i].name);
        printf("\nNum:");
        printf("%d",passenger[i].num);
        printf("\nsname:");
        printf("%s",passenger[i].sname);
        printf("snum:");
        printf("%d",passenger[i].snum);
        printf("dest:");
        printf("%s",passenger[i].dest);
        printf("Bags:");
        printf("%d",passenger[i].bags);
    }
    getchar();
    getchar();
}