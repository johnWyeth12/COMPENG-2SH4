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

    printf("Please enter the number of digits to add to get PI: ");
    scanf("%d", &nDigitsToAdd);

    for(i = 1; i <= nDigitsToAdd; i++)
    {
        piTotal += ( (4/((i * 2) - 1)) * signMultiplier );
        signMultiplier = signMultiplier * (-1);
    }

    printf("\nThe approximated value of pi when run %d times is: %f\n", nDigitsToAdd, piTotal);

    return (0);
}
