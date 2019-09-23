/*
Question 2 - Lab 1
    17/09/2019
*/

#include <stdio.h>

int main(void)
{
    int n = 0, i = 0;
    int currentInput = 0, lowestInput = -1;
    //Reading in n number of repitions - while checking for invalid inputs
    do
    {
        printf("Please enter the amount of integers you'd like to input (Must Be Positive): ");
        scanf("%d", &n);

        //Check that (n) is positive - counting 0 as positive
        if(n <= 0)
        {
            printf("Invalid Input - Must be Positive!\n");
        }
        else if (n != 0)
        {
            //If the input is valid, get the first input from the user so that all other inputs can be compared to it
            printf("Please enter an integer: ");
            scanf("%d", &lowestInput);
        }

    }while(n <= 0);

    //Ask the user to input an integer n-1 times (already asked once in the do-while loop)
    for (i = 1; i < n; i++)
    {
        printf("Please enter an integer: ");
        scanf("%d", &currentInput);

        //If the user's input is lower than the (lowestInput), it replaces it
        if(currentInput < lowestInput)
        {
            lowestInput = currentInput;
        }
    }

    //Finally, prints the lowest number that the user inputted
    printf("\n");
    printf("The lowest number is: %d", lowestInput);

    return (0);
}
