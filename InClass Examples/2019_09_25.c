/*
In class examples
The following code counts the number of "m" and "M" in a phrase
*/

#include <stdio.h>

int main(void)
{
    char a[20];
    puts("Please input five characters on a line.");
    gets(a);
    printf("a[4] = %c, it's integer value is %d\n", a[4], a[4]);
    printf("a[5] = %c, it's integer value is %d\n", a[5], a[5]);

    puts(a);
    return (0);
}
