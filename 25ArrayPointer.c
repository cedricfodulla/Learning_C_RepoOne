// Arrays and Pointers
#include <stdio.h>

int main()
{
    int A[5], B[5], i;
    int *P;
    P = A; // The pointer is pointing at A
    printf("\n A=%d", A);
    printf("\n P=%d", P);
    P = B; // The pointer is now pointing at an another array, B
    printf("\n\n B=%d", B);
    printf("\n P=%d", P);

    return 0;
}

// This program reiterates the use of pointer
// This program does not work properly -_-