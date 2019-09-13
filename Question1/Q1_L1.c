/*
Question 1 - Lab 1
    17/09/2019
*/

#include <stdio.h>

int main(void)
{
    int total = 0;

    // For Loop
    int i = 0;
    for(i = 30; i < 1000; i++)
    {
       if(i % 4 == 0)
       {
           total+= i;
       }
    }

    printf("The total multiples of 4 between 30 and 1000 using a FOR loop is: %d\n", total);
    //reset the total counter
    total = 0;

    /*-----------------------------------------------------------------------------------------------*/

    //While Loop
    i = 30;
    while(i < 1000)
    {
        if(i % 4 == 0)
        {
            total+= i;
        }

        //Increment (i) after each iteration
        i++;
    }

    printf("The total multiples of 4 between 30 and 1000 using a WHILE loop is: %d\n", total);
    //reset the total counter
    total = 0;

    /*-----------------------------------------------------------------------------------------------*/

    //Do-while Loop
    i = 30;

    do
    {
        if(i % 4 == 0)
        {
            total+= i;
        }

        i++;

    }while(i < 1000);

    printf("The total multiples of 4 between 30 and 1000 using a DO-WHILE loop is: %d\n", total);

    printf("\nThanks for using my program!\n");

    return 0;
}
