/*
Question 6
    2019-09-27
*/

#include <stdio.h>

#define sizeOfSource 8
#define sizeOfPositionAndValue 3

void efficient(const int source[], int val[], int pos[], int size);

void reconstruct( int source[], int m, const int val[], const int pos[], int n);

int main(void)
{
    //it is assumed that the size of testPos and testVal is equal to the number of non-zeros in the source vector
    int source[8] = {0, 0, 23, 0, -7, 0, 0, 48};
    int testVal[3] = {0, 0, 0};
    int testPos[3] = {0, 0, 0};

    printf("The original source array is:        ");
    for(int i = 0; i < sizeOfSource; i++)
    {
        printf("%d " ,source[i]);
    }
    printf("\n");
    printf("\n");

    //Using "efficient" to assign values to testVal and testPos
    efficient(source, testVal, testPos, sizeOfSource);

    //Displaying the testPos array
    printf("The testPos array after 'efficient': ");
    for(int i = 0; i < sizeOfPositionAndValue; i++)
    {
        printf("%d ", testPos[i]);
    }
    printf("\n");
    printf("\n");

    //Displaying the testVal array
    printf("The testVal array after 'efficient': ");
    for(int i = 0; i < sizeOfPositionAndValue; i++)
    {
        printf("%d ", testVal[i]);
    }
    printf("\n");
    printf("\n");

    //Resetting the source array to show that the "recontruct" function works
    for(int i = 0; i < sizeOfSource; i++)
    {
        source[i] = 0;
    }

    //Using "reconstruct" to make the source array again
    reconstruct(source, 8, testVal, testPos, 3);

    //Displaying soutrce array after reconstruction
    printf("The reconstructed source array is:   ");
     for(int i = 0; i < sizeOfSource; i++)
    {
        printf("%d ", source[i]);
    }
    printf("\n");

    return (0);
}


void efficient(const int source[], int val[], int pos[], int size)
{
    int index = 0;
    for(int i = 0; i < size; i++)
    {
        if(source[i] != 0)
        {
            pos[index] = i;
            val[index] = source[i];
            //Index for the (pos) and (val) array only increases if there is a non-zero entry in the array (source)
            index++;
        }
    }
}


void reconstruct( int source[], int m, const int val[], const int pos[], int n)
{
    int index = 0;
    //(n) represents the size of the (val) and (pos) vectors
    //(m) represents the size of the source vector
    for(int i = 0; i < m; i++)
    {
        if(pos[index] == i)
        {
            //Only increment the index of the (val) and (pos) array when the source array is at it's specified indexs
            source[i] = val[index];
            index++;
        }
        else
        {
            //Otherwise, just set the source array @ index (i) to 0
            source[i] = 0;
        }
    }
}
