/*
Question 3 - Lab 1
    17/09/2019
*/

#include <stdio.h>

int main(void)
{
    int input = -1;
    char remainder = 0;

    while(input != 0)
    {
        //Reading input from user
        printf("Please input an integer (0 to end): ");
        scanf("%d", &input);

        //This won't run if the "exit" commend is inputted
        if(input != 0)
        {

            int currentInteger = input;
            char digitCounter = 0;

            if(input < 0)
            {
                currentInteger = -input;
            }

            while(currentInteger > 0)
            {
                remainder = currentInteger % 10;
                currentInteger = (currentInteger - remainder) / 10;
                digitCounter++;
            }

            if(digitCounter == 5)
            {
                printf("Your input is a five-digit number: %d\n", input);
            }
        }
        else
        {
            printf("");
            printf("Thank you for using my program!\n");
;       }

    }


    return (0);
}
