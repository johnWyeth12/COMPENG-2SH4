/*
Question5
    2019-09-26
*/

#include <stdio.h>

void string_copy(const char source[], char destination[], int n);

int main(void)
{
    char testSource[] = "sup";
    char testdestination[] = "hello";

    string_copy(testSource, testdestination, 5);

    return (0);
}


void string_copy(const char source[], char destination[], int n)
{
    int i = 0, doNotFinishFlag = 0;
    for(i = 0; source[i] != '\0'; i++)
    {
        //Checks if the source array will fit in the destination array
        if(destination[i] == '\0')
        {
            //If this runs, then (source) is larger than (destination) - string is not copied so therefore cleared
            for(int x = 0; x < n; x++)
            {
                destination[x] = '\0';
            }
            printf("The destination string is not large enough \n");
            doNotFinishFlag = 1;
            break;
        }
        else
        {
            destination[i] = source[i];
        }
    }

    //Add null terminator character to the end of the destination string if it's ok to
    if(!doNotFinishFlag)
    {
        destination[i] = '\0';
    }

    printf("%s", destination);
}
