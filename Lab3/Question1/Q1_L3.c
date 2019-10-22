/*
Question 1
    2019-10-11
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strcat(const char * const str1, const char * const str2);

int main(void)
{
    //reserving 50 characters for str1 and str2
    char *str1 = calloc(500, sizeof(char));
    char *str2 = calloc(500, sizeof(char));

    //Getting input from the user
    printf("Please Input A String: ");
    gets(str1);

    printf("Please Input Another String: ");
    gets(str2);

    //Displaying the concatenation along with both the input strings
    printf("\nThe Concatenation of both '%s', and '%s' is:\n%s\n" , str1, str2, my_strcat(str1, str2));

    //Freeing the memory allocated for the inputs
    free(str1);
    free(str2);

    return (0);
}

char *my_strcat(const char * const str1, const char * const str2)
{
    //create the length of concatenated string + 1 for the null character
    int lenNewString = (strlen(str1) + strlen(str2) + 1);
    char * newString = calloc(lenNewString, sizeof(char));

    for(int i = 0; i < lenNewString; i++)
    {
        //If the index of the for loop is within range of the first string - it assigns the first string index to the new string
        //Otherwise it compensates the index and assigns teh second string's index
        (i < strlen(str1)) ? (*(newString + i) = *(str1 + i)) : (*(newString + i) = *(str2 + i - strlen(str1)));
    }

    //Returns the pointer to the first index of the new concatenated string
    return newString;

}
