/*
Question 4
    2019-09-26
*/

#include <stdio.h>

void letter_freq(const char word[], int freq []);

int main(void)
{
    char wordArray[100];
    int frequency[26];

    printf("Please enter a String: ");
    gets(wordArray);
    printf("\n");

    letter_freq(wordArray, frequency);

    return (0);
}

//This function counts the frequency of all the characters in a word passed into it
void letter_freq(const char word[], int freq [])
{
    //Set number count for all letter to 0
    for(int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for(int i = 0; word[i] != '\0';i++)
    {
        //Lower case
        if((int)word[i] <= 122 && (int)word[i] >= 97)
        {
            freq[ (int)word[i] - 97 ]++;
        }

        //Upper case
        if((int)word[i] <= 90 && (int)word[i] >= 65)
        {
            freq[ (int)word[i] - 65 ]++;
        }
    }

    //Printing the array of frequencys
    for(int i = 97; i < 26 + 97; i++)
    {
        printf("The count of '%c' and '%c' is: %d\n",(i - 32) ,i , freq[i - 97]);
    }
}
