/*
Question 8 - Lab 1
    17/09/2019
*/

#include <stdio.h>

int main(void)
{
    //The following number is what's being flipped
    int numberToFlip = 3412400;
    int lastnumber = 0;

    //Get rid of any 0's at the end of the integer
    while(numberToFlip % 10 == 0)
    {
        numberToFlip /= 10;
    }

    //Display the intger backwards
    while(numberToFlip > 0)
    {
        lastnumber = numberToFlip % 10;
        numberToFlip = (numberToFlip - lastnumber) / 10;
        //Printing the last digit of the remaining integer
        printf("%d", lastnumber);
    }

    return (0);
}
