// This program sorts out an array of numbers
#include <stdio.h>

int main()
{
    int A[10], n, i, j, temp;

    printf("Enter the number of elements: "); // Number of elements input by user
    scanf("%d", &n);

    printf("Enter %d number of elements below: ", n); // User will input all the elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    // Main logic
    for (i = 0; i < n - 1; i++) // phases
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1]) // iterations in each phase
            {                    // Element Swapping
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    printf("\nSorted Array in Ascending order: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}