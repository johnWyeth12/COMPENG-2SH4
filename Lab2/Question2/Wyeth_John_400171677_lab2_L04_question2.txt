/*
Question 2
    2019-09-25
*/

#include <stdio.h>
#include "math.h"

#define N 4

int is_diag_dom(int mat[ ][N]);

int main(void)
{
    int testArray[N][N] =
    {
        {100, 0, 0, 0},
        {12, 65, 6, 15},
        {0, 0, 110, 2},
        {0, 0, 0, 140}
    };

    if(is_diag_dom(testArray))
    {
        printf("The matrix IS diagonally dominant\n");
    }
    else
    {
        printf("The matrix is NOT diagonally dominant\n");
    }

    return (0);
}

/*
This function checks if the matrix passed into it, is diagonally dominant
1 = diagonally dominant
0 = not diagonally dominant
*/
int is_diag_dom(int mat[ ][N])
{
    int diagValue = 0;
    int sumRemainingValues = 0, failFlag = 1;

    //Cycles through rows (0 to N-1)
    for(int i = 0; i < N; i++)
    {
        diagValue = mat[i][i];

        //Cycles through columns (0 to N-1)
        for(int x = 0; x < N; x++)
        {
            //Only adds together the elements in the row, as long as x doesn't equal i
            if(x != i)
            {
                sumRemainingValues += fabs( mat[i][x] );
            }
        }

        //Checks if the last row is diagonally dominant - breaks if it doesn't
        if(sumRemainingValues < diagValue)
        {
            //If this runs, then the last row is diagoinally dominant - this resets variables for the next iteration
            sumRemainingValues = 0;
        }
        else
        {
            //If this runs, the row is NOT diagonally dominant - loop ends
            failFlag = 0;
            break;
        }
    }

    //Depending on the "failFlag" variable, either returns 0 or 1
    if(failFlag)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
