/*
Question 7 (Bonus)
    2019-09-30
*/

#include <stdio.h>

#define finalArray 8

void addEff(int val1[], int val2[], int val3[],int pos1[], int pos2[],int pos3[],int k1, int k2);

void printArrays(int pos3[], int val3[]);

int main(void)
{
    int val3[finalArray] = {0, 0, 0, 0, 0, 0, 0, 0};
    int pos3[finalArray] = {0, 0, 0, 0, 0, 0, 0, 0};

    int pos1[3] = {2, 4, 7};
    int val1[3] = {23, -7, 48};

    int pos2[3] = {2, 4, 7};
    int val2[3] = {1, 7, 1};

    addEff(val1, val2, val3, pos1, pos2, pos3, 3, 3);

    printArrays(pos3, val3);

    return (0);
}

void addEff(int val1[], int val2[], int val3[],int pos1[], int pos2[],int pos3[],int k1, int k2)
{
    //Checking position 1
    for(int i = 0; i < k1; i++)
    {
        pos3[ pos1[i] ] = pos1[i];
        val3[ pos1[i] ] += val1[i];
    }

    //Checking position 2
    for(int i = 0; i < k2; i++)
    {
        pos3[ pos2[i] ] = pos2[i];
        val3[ pos2[i] ] += val2[i];

        if(val3[ pos2[i] ] == 0)
        {
            pos3[ pos2[i] ] = 0;
        }
    }

}

void printArrays(int pos3[], int val3[])
{
    for(int i = 0; i < finalArray; i++)
    {
        if(pos3[i] != 0)
        {
             printf("%d ", pos3[i]);
        }
    }

    printf("\n");

    for(int i = 0; i < finalArray; i++)
    {
        if(pos3[i] != 0)
        {
            printf("%d ", val3[i]);
        }
    }

    printf("\n");
}
