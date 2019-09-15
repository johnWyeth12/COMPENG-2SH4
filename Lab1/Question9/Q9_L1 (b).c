/*
Question 9(b) - Lab 1
    THIS PROGRAM READS A SEQUENCE OF INTEGERS, AND DISPLAYS THEM IN A LONG-RUN BINARY STREAM
    17/09/2019
*/

#include <stdio.h>

int main(void)
{
    int bitToDisplay = 0, loopCounter = 0, i = 0, numberDigits = 0;
    int numberRelevantDigits = 0, currentBit = 0;
    FILE * input_file = fopen("inputFile.txt", "r");
    FILE * output_file = fopen("outputFile.txt", "w");

    //get total number of bots to loop
    fscanf(input_file, "%d", &numberDigits);

    //Get first number in file
    fscanf(input_file, "%d", &currentBit);

    for(loopCounter = 0; loopCounter < numberDigits; loopCounter++)
    {
        //Display to output file
        for (int i = 0; i < currentBit; i++)
        {
            fprintf(output_file, "%d ", bitToDisplay);
        }

        //Changing between 0 and 1, depending on the loopCounter count
        if(loopCounter % 2 == 0)
        {
            bitToDisplay = 1;
        }
        else
        {
            bitToDisplay = 0;
        }

        //Get next number of bits to be displayed
        fscanf(input_file, "%d", &currentBit);
    }

    //Closing both files at the end of the program
    fclose(input_file);
    fclose(output_file);

    return (0);
}
