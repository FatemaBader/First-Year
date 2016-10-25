#include <stdio.h>
#include <stdlib.h>
main()
{
    struct time_rec
    {
        int hours;
        int mins;
        int secs;
    };
    struct time_rec current_time;
    //enter values
    printf("Please enter values for current time\n");
    scanf("%d",&current_time.hours);
    scanf("%d",&current_time.mins);
    scanf("%d",&current_time.secs);
    //add 1sec
    current_time.secs++;
    //display the new values
    printf("Hours:%d  Mins:%d  Secs:%d",current_time.hours,current_time.mins,current_time.secs);
    getchar();
    getchar();
}
