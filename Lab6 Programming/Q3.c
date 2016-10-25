/*3. Define an integer array with 4 elements. Write a program that will allow the user to
enter 4 numbers into this array and then display these on the screen in the same order
they were entered. Your program must then swap the 1st and 2nd numbers in the array
and swap the 3rd and 4th numbers in the array. Now your program must display the
numbers on the screen using this new order. */

#include <stdio.h>
#define SIZE 4

main()

{
    int nums[SIZE];
    int i;
    
    for (i=0 ; i<SIZE ; i++)
    {
        scanf("%d",&nums[i]);
    }
    
    for (i=0 ; i<SIZE ; i+=2)
    {
        i++;
        printf("%d\n", nums[i]);
        i--;
        printf("%d\n",nums[i]);
    }
    
   
    getchar();
    getchar();
    
}