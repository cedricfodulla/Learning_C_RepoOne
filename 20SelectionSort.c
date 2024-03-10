#include <stdio.h>

int main()
{
    int A[10], n, i, j, temp, min_pos;
    printf("Enter the number of elements: "); // Number of elements input by user
    scanf("%d", &n);

    printf("Enter %d number of elements below: ", n); // User will input all the elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    // Main Logic
    for (i = 0; i < n - 1; i++)
    {
        min_pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (A[j], A[min_pos])
                min_pos = j;
        }
        temp = A[i];
        A[i] = A[min_pos];
        A[min_pos] = temp;
    }
    printf("\nSorted array in ascending order: ");
    for (i = 0; i < n; i++)
    {
        printf(" %d", A[i]);
    }
    return 0;
}