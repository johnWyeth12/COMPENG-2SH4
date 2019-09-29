/*
Question 3
    2019-09-25
*/

#include <stdio.h>

#define N 3

void printDiagonalArray(int mat[][N]);

int main(void)
{
    int testArray[N][N] =
    {
        {1, 12, 13},
        {5, 16, 17},
        {9, 10, 11}
    };

    printDiagonalArray(testArray);

    return (0);
}

//This function prints any NxN matrix in diagonal fashion
void printDiagonalArray(int mat[][N])
{
    int x = 0;

    //This for loop runs until halfway through the array
    for(int n = 0; n < N; n++)
    {
        for(int i = n, x = 0; i >= 0; i--, x++)
        {
            printf("%d ", mat[i][x]);
        }

    }

    //This for loop runs from where the previous one left off, and to the (N,N)th element
    for(int n = N - 1; n < (2 * N - 1); n++)
    {
        for(int i = n, x = 1; i >= 1; i--, x++)
        {
            //Fail safe check - using my method, it prints diagonally through the matrix, however this means attempting to print elements outside of the given array
            //So I have this check to filter out any array elements that aren't WITHIN the length of the array
            if(i < N && x < N)
            {
                printf("%d ", mat[i][x]);
            }
        }
    }

    printf("\n");

}
