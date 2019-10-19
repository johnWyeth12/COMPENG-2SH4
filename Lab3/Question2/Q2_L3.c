/*
Question 2
    2019-10-11
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int idNumber;
    char firstName[15];
    char lastName[15];
    int proj1Grade;
    int proj2Grade;
    float finalGrade;
}student;

student ** create_class_list(char * filename, int * sizePtr);
int find (int idNo, student ** list, int size);

void input_grades(char *filename, student ** list, int size);
void compute_final_course_grades(student ** list, int size);
void output_final_course_grades(student ** list, char * fileName, int size);
void print_list(student ** list, int size);
void withdraw(int idNo, student ** list, int * sizePtr);
void destroy_list(student ** list, int * sizePtr);

int main(void)
{
    //Defining the name of the text file in a variable to be used throughout the program
    char fileName[] = "classlist.txt";
    char fileGrades[] = "classGrades.txt";
    char fileOutput[] = "outputFile.txt";
    int sizePtr = 0;

    //Creates class list from given input file
    student ** classList = create_class_list(fileName, &sizePtr);

    //int i = find(9000, classList, sizePtr);
    //printf("Index: %d", i);
    //input_grades(fileGrades, classList, sizePtr);
    //compute_final_course_grades(classList, sizePtr);
    //output_final_course_grades(classList, fileOutput, sizePtr);
    //withdraw(1200, classList, &sizePtr);
    //print_list(classList, sizePtr);
    //destroy_list(classList, &sizePtr);

    return (0);
}

//Creating the class list from an input file
student ** create_class_list(char * fileName, int * sizePtr)
{
    FILE * inputFile = fopen(fileName, "r");
    int fileSize = 0;

    //Sets the new size of the class list
    fscanf(inputFile, "%d", &fileSize);
    *(sizePtr) = fileSize;

    //Create a single pointer array that'll get all the info from the text file, and set another pointer to the address of the that pointer
    student ** studentListPtr = calloc(fileSize, sizeof(student));;

    for(int i = 0; i < fileSize; i++)
    {
        //Using calloc for each element of the array initializes the elemnt's parts to (0)
        studentListPtr[i] = calloc(1 ,sizeof(student));
        //Scanning the text file to get the student's ID number, first name and last name
        fscanf(inputFile, "%d %s %s", &(studentListPtr[i]->idNumber), (studentListPtr[i]->firstName), (studentListPtr[i]->lastName));
    }

    //Close the file after it's been used
    fclose(inputFile);

    return studentListPtr;

}

//Finding a students's ID in the class list
int find(int idNo, student ** list, int size)
{
    //The following for loop goes through the entire **list
    for (int i = 0; i < size; i++)
    {
        if(list[i]->idNumber == idNo)
        {
            //If there is an ID that maches the caller's ID number, it returns it's index and adds (1) to it - to get the index into readable terms
            return i;
        }
    }

    //If the code gets here, there the ID is not in the list, and therefore return2 (-1)
    return -1;
}

//Getting the grades for all the students from an input file
void input_grades(char *filename, student ** list, int size)
{
    FILE * gradeFile = fopen(filename, "r");

    int idNumber = 0, proj1Grade = 0, proj2Grade = 0, newIndex = 0;

    for(int i = 0; i < size; i++)
    {
        //Scanning the class grades with it's new format
        fscanf(gradeFile, "%d %d %d", &idNumber, &proj1Grade, &proj2Grade);

        newIndex = find(idNumber, list, size);

        //Checking that the ID if found in the class list
        if(newIndex != -1)
        {
            //Re-index the project grades b/c the "find" function returns one more then the actual index
            list[newIndex]->proj1Grade = proj1Grade;
            list[newIndex]->proj2Grade = proj2Grade;
        }
        else
        {
            //In case the index isn't found - display's an error and breaks out of the function
            printf("ERROR - ID not found in class list");
            break;
        }
    }
}

//Computes the final grades for all the students
void compute_final_course_grades(student ** list, int size)
{
    //Computes the average of the first and second project's grade for each of the students in the class list
    for(int i = 0; i < size; i++)
    {
        list[i]->finalGrade = (float)(list[i]->proj1Grade + list[i]->proj2Grade) / 2;
    }
}

//Prints the class list and each of their averages to an output file
void output_final_course_grades(student ** list, char * fileName, int size)
{
    FILE * outputFile = fopen(fileName, "w");

    //First display the number of students in the class
    fprintf(outputFile, "%d\n", size);

    //Run through the class list and print each student's info into the output file
    for(int i = 0; i < size; i++)
    {
        fprintf(outputFile, "%d %3.2f\n", list[i]->idNumber, list[i]->finalGrade);
    }

    fclose(outputFile);
}

//Prints the class list and all their information
void print_list(student ** list, int size)
{
    //Run through the class list and display  each student's information
    for(int i = 0; i < size; i++)
    {
        printf("ID: %d, NAME: %s %s, PROJECT 1 GRADE: %d, PROJECT 2 GRADE: %d, FINAL GRADE: %3.2f\n", list[i]->idNumber, list[i]->firstName, list[i]->lastName, list[i]->proj1Grade, list[i]->proj2Grade, list[i]->finalGrade);
    }
}

//Withdraws a student from the class list
void withdraw(int idNo, student ** list, int * sizePtr)
{
    int searchIndex = find(idNo, list, *(sizePtr));

    //If the id is within the class list, the list is modified
    if(searchIndex != -1)
    {
        //Deallocating the searchIndex's index of the class list
        free(list[searchIndex]);

        //Moving all the remaining students one elemnt left
        for(int i = searchIndex; i < *sizePtr; i++)
        {
            list[i] = list[i+1];
        }

        //Removing one off the sixe of the class list
        *(sizePtr)= *(sizePtr) - 1;
    }
    //If not, the user is told that the id cannot be withdrawn from the class list
    else
    {
        printf("Could not withdraw - student ID not found\n");
    }
}

void destroy_list(student ** list, int * sizePtr)
{
    //Deallocates all the memory that stores the class list
    for(int i = 0; i < *(sizePtr); i++)
    {
        free(list[i]);
    }

    //Sets the size of the class list to 0
    *(sizePtr) = 0;

}
