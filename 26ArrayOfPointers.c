// An array of pointers being printed
#include <stdio.h>

int main()
{
    int A[5] = {11, 22, 33, 44, 55};  // An array with 5 values
    int *P[5];                        // A pointer with 5 allocated values just like an array
    int v1 = 20, v2 = 40, v3 = 70, i; // arbitrary parameters given randomly -_-

    // These will be the values of P in the for loop
    P[0] = &v1;   // address of v1
    P[1] = &v2;   // address of v2
    P[2] = &v3;   // address of v3
    P[3] = &A[1]; // address of array A 2nd element
    P[4] = A;     // address of array A 1st element

    // Random printing of addresses -_-
    printf("\n &v1=%d", &v1);
    printf("\n &v2=%d", &v2);

    // For loop that prints P[0] to P[4] (5 elements)
    for (i = 0; i < 5; i++)
    {
        printf("\n %d", P[i]);
    }
}

// For Loop - The for Loop prints the values of P[0] to P[4]
// at P[0], the address of v1 will be printed
// at P[1], the address of v2 will be printed
// at P[2], the address of v3 will be printed
// at P[3], the address of the 2nd element of array 'A' will be printed
// at P[4], the starting address (first element's address) of the array 'A' will be printed
