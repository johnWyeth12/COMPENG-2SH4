/*
Question 6 - Lab 1
    17/09/2019
*/

#include <stdio.h>

int main(void)
{
    int totalPythagTriples = 0;
    int a = 0, b = 0, c = 0;

    printf(" (side1) , (side2) , (hypotenuse) \n");

    //Starting the triple-nested for loop to try all possibilities (brute force)
    for(a = 1; a <= 400; a++)
    {
        //Side 1 (b) is always less than Side 2 (a)
        for(b = 1; b <= a; b++)
        {
            for(c = 1; c <= 400; c++)
            {
                if((a * a) + (b * b) == (c * c))
                {
                    totalPythagTriples++;
                    printf("%d, %d, %d \n", b, a, c);
                }
            }
        }
    }

    printf("\nTotal Number of Pythagorean Triples: %d\n", totalPythagTriples);


    return (0);
}
