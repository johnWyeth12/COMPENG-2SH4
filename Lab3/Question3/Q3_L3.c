/*
Question 3
    2019-10-15
*/

#include <stdio.h>
#include <stdlib.h>

char ** read_words(const char * input_filename, int * nPtr);

int main(void)
{
    char fileName[] = "inputWords.txt";
    int numberOfWords = 0;

    read_words(fileName, &numberOfWords);

    return (0);
}

char ** read_words(const char * input_filename, int * nPtr)
{
    FILE * inputFile = fopen(input_filename, "r");

    fscanf(inputFile, "%d", nPtr);
    char **  fileWords = calloc(*nPtr, sizeof(char));

    char * beginningOfWord = NULL;

    for(int i = 0; i < *(nPtr); i++)
    {
        fscanf(inputFile, "%s", beginningOfWord);
        printf("%s", *beginningOfWord);
    }

    fclose(inputFile);

}
