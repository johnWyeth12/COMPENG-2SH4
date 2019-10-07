/*
In class examples
    2019-10-07
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    typedef struct
    {
        char character;
        int number;
    }newType;

    newType hello = {'c', 56};

    newType * ptr = &hello;

    printf("%d", ptr -> number);

    //printf("%d, %c", student.grade.number, student.grade.character);

    return (0);
}
