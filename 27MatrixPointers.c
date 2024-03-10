// Pointers used to print an array/matrix of numbers
#include <stdio.h>

int main()
{
    int A[3][3] = {11, 22, 33, 44, 55, 66, 77, 88, 99}, i, j;
    int **Q;
    int *P[3];
    P[0] = A[0];
    P[1] = A[1];
    P[2] = A[2];
    Q = P;

    printf("\nThe Array elements are: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d   ", P[i][j]);
        }
        printf("\n");
    }
    printf("\n A[0]=%d", A[0]);
    printf("\n A[1]=%d", A[1]);
    printf("\n A[2]=%d", A[2]);
    return 0;
}

/* Visualization of how the array is being printed with the help of a pointer
11(P[0][0])  22(P[0][1])  33(P[0][2])
44(P[1][0])  55(P[1][1])  66(P[1][2])
77(P[2][0])  88(P[2][1])  99(P[2][2])
*/

// How the Loop above works
// i = 0 --> j=0, j=1, j=2
// i = 1 --> j=0, j=1, j=2
// i = 2 --> j=0, j=1, j=2