/*
Question 9(a) - Lab 1
    THIS PROGRAM READS A RUN-ON BINARY SEQUENCE AND CONVERTS IT INTO A CORRESPONDING SEQUENCE OF INTEGERS
    17/09/2019
*/

#include <stdio.h>

int main(void)
{
    int lastBit = 0, zeroCounter = 0, oneCounter = 0, loopCounter = 0;
    int numberRelevantDigits = 0, currentBit = 0;
    FILE * input_file = fopen("inputFile.txt", "r");
    FILE * output_file = fopen("outputFile.txt", "w");

    //Read the first number to set the variable for the following for loop
    fscanf(input_file, "%d", &numberRelevantDigits);

    //Get first bit to start off loop
    fscanf(input_file, "%d", &currentBit);

    while(loopCounter < numberRelevantDigits)
    {
        while((currentBit == 0))
        {
            //Update the loopCounter and the zeroCounter
            loopCounter++;
            zeroCounter++;
            fscanf(input_file, "%d", &currentBit);
        }
        while((currentBit == 1) && (loopCounter < numberRelevantDigits))
        {
            //Update the loopCounter and the zeroCounter
            loopCounter++;
            oneCounter++;
            fscanf(input_file, "%d", &currentBit);
        }

        //Print the 0 and 1 count - then reset for the next step through
        fprintf(output_file, "%d %d ", zeroCounter, oneCounter);
        zeroCounter = 0;
        oneCounter = 0;
    }

    //Closing both files at the end of the program
    fclose(input_file);
    fclose(output_file);

    return (0);
}
