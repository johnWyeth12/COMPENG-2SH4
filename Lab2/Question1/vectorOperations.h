#ifndef VECTOROPERATIONS_H
#define VECTOROPERATIONS_H

void print_vector(double array[], int size);

void add_vectors(double vector1[], double vector2[], double vector3[], int n);

double scalar_prod(double vector1[], double vector2[], int n);

double norm2(double vector1[], int n);

//Prints all the components in the array passed into this function
void print_vector(double array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%lf, ", array[i]);
    }
}

//Adds vector1 and vector2 and puts the sum in the memory address of vector3 for the corresponding aray index
//It's assumed that both vectors are the same length and (n) is that length
void add_vectors(double vector1[], double vector2[], double vector3[], int n)
{
    for(int i = 0; i < n; i++)
    {
        vector3[i] = vector1[i] + vector2[i];
    }
}

//Returns the dot product of two vectors
double scalar_prod(double vector1[], double vector2[], int n)
{
    double total = 0;

    for(int i = 0; i < n; i++)
    {
        total += ( vector1[i] * vector2[i] );
    }

    return total;
}

double norm2(double vector1[], int n)
{
    double scalarProduct = scalar_prod(vector1, vector1, n);

    return ( sqrt(scalarProduct) );

}

#endif // VECTOROPERATIONS_H
