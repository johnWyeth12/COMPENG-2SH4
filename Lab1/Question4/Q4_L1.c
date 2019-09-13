/*
Question 3 - Lab 1
    17/09/2019
*/

#include <stdio.h>

int main(void)
{
    float inputAverage = 0.0;

    //Reading the student's grade
    printf("Please enter a student's average: ");
    scanf("%f", &inputAverage);

    //Mutltiple checks for the student's grade (ranging from 4 to 0)
    if (inputAverage >= 90 && inputAverage <= 100)
    {
        printf("The student's grade is a: 4");
    }
    else if (inputAverage >= 80 && inputAverage <= 89)
    {
        printf("The student's grade is a: 3");
    }
    else if (inputAverage >= 70 && inputAverage <= 79)
    {
        printf("The student's grade is a: 2");
    }
    else if (inputAverage >= 60 && inputAverage <= 69)
    {
       printf("The student's grade is a: 1");
    }
    else if (inputAverage > 0 && inputAverage <= 59)
    {
       printf("The student's grade is a: 0");
    }

    // If the following is executed - then the user's input is an invalid grade
    else
    {
        printf("The grade you entered is invalid!");
    }

    return (0);
}
