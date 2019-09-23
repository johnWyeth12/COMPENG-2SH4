/*
FUNCTIONS
 * Function prototype - telling compiler there will be a function with given paramaters
 * Function definition - giving the function ots contents
 * Function call - when the function is actually used in the program

*/

#include <stdio.h>

int doubleInput(int x);

int main(void)
{
    int i = 2;
    int y = doubleInput(i);

    printf("%d", y);


    return (0);
}

int doubleInput(int x)
{
    return 2 * x;
}
