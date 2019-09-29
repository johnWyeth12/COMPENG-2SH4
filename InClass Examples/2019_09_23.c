/*
IQuiz 3
*/

#include <stdio.h>
#define N 10

void transpose(double mat[][N]);

int main(void)
{
    double matrix[2][N] = { {1, 2}, {3, 4, 5, 6, 7, 8, 9, 10, 11, 12} };
    transpose(matrix);

    return(0);
}


void transpose(double mat[][N])
{
    double resultMatrix[N][N];

    for(int i = 0; i < N; i++)
    {
        for(int x = 0; x < N; x++)
        {
            //Sets the value at the resultMatrix index to 0 - will be changed in the next line
            resultMatrix[i][x] = 0;
            //Reverses rows and columns for the "transposed matrix"
            resultMatrix [i][x] = mat[x][i];
        }

    }

}
