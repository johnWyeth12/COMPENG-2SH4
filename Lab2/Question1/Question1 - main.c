/*
Question 1
    2019-09-24
*/

#include <stdio.h>
#include <math.h>
#include "vectorOperations.h"

#define N 3

int main(void)
{
    double xArray[N] = {2, 4, 6};
    double yArray[N] = {0, 1, 2};
    double resultArray[N] = {0, 0, 0};

    //Testing the "add_vectors" function
    add_vectors(xArray, yArray, resultArray, N);
    printf("Add_Vectors:   ");
    print_vector(resultArray, N);
    printf("\n");

    //Testing the "scalar_prod" function
    printf("Scalar_Prod:   %lf", scalar_prod(xArray, yArray, N));
    printf("\n");

    //Testing the "norm2" function
    printf("L2 Norm:       %lf", norm2(xArray, N));
    printf("\n");

    return (0);
}
