/*
In class examples
    2019-10-02
*/

#include <stdio.h>

int main(void)
{
    int testArray[] = {0, 1, 2, 3, 4, 5, 6, 7};

    int arraySize = (sizeof(testArray)) / sizeof(testArray[0]);

    //Prints the size of the array (in this case - 8)
    printf("%d", arraySize);

    return (0);
}

