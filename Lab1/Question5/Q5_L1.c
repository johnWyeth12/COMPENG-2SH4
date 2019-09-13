/*
Question 5 - Lab 1
    17/09/2019
*/

#include <stdio.h>

int main(void)
{
    int nDigitsToAdd = 0;
    float signMultiplier = 1, i = 0;
    float piTotal = 0;

    //The program keeps asking for the input if it's invalid
    do
    {
        printf("Please enter the number of digits to add to get PI (Greater than 0): ");
        scanf("%d", &nDigitsToAdd);

        if(nDigitsToAdd < 1)
        {
            printf("Invalid input - must be greater than 0\n");
        }

    }while(nDigitsToAdd < 1);

    //Calculating the approximation of PI with the number of repitions that the user entered
    for(i = 1; i <= nDigitsToAdd; i++)
    {
        piTotal += ( (4/((i * 2) - 1)) * signMultiplier );
        //The signMultiplier must change every time - as seen in the equation: (+)(-)(+)(-) etc.
        signMultiplier = signMultiplier * (-1);
    }

    //Displaying the approximated value of PI to the user
    printf("\nThe approximated value of pi when run %d times is: %f\n", nDigitsToAdd, piTotal);

    return (0);
}
