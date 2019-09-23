/*
Question 7 - Lab 1
    17/09/2019
*/

#include <stdio.h>

int main(void)
{
    int mInput = 0, i = 0, x = 0, perfectNumberCheck = 0;

    do
    {
        printf("Please input a number (Greater than 1): ");
        scanf("%d", &mInput);

        if(mInput < 1)
        {
            printf("Invalid Input - Must be greater than 1\n");
        }

    }while(mInput < 1);

    for(i = 1; i <= mInput; i++)
    {
        for(x = 1; x < i; x++)
        {
            if(i % x == 0)
            {
                perfectNumberCheck += x;
            }
        }

        if(i == perfectNumberCheck)
        {
            //If this is executed, then the integer (i) is a "perfect number"
            printf("%d is a Perfect Number\n", i);
        }

        perfectNumberCheck = 0;
    }

    return (0);
}

