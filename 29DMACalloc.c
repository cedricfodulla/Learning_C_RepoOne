// DMA - Dynamic Memory Allocation
// malloc()
// calloc()
// realloc()
// free()

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *P, i, j, n;
    printf("\n Enter the value of n: ");
    scanf("%d", &n); // user input is stored in the address of variable n

    // dynamic memory allocated as single block
    P = (int *)calloc(n, sizeof(int));
    printf("\n Enter the array elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", P + i);
    }
    printf("\nThe Array elements are: ");
    for (i = 0; i < n; i++) // scanning array of elements
    {
        printf("%d  ", *(P + i));
    }
    n = n + 5; // we have added 5 more addresses or memory allocation to n

    // dynamic memory is now redefined to new size
    P = (int *)realloc(P, n * sizeof(int));
    printf("\n\nThe Array elements will be: ");
    for (i = 0; i < n; i++) // scanning array of elements
    {
        printf("%d  ", *(P + i));
    }
    free(P); // deallocate the space at pointer P
    return 0;
}

/* malloc(): Memory Allocation
written as: void * malloc(int size_in_bytes); */

/* calloc(): Contiguous Allocation
written as: void * calloc(int_no_of_blocks, int size_in_bytes);*/

/* realloc(): Reallocation
written as: void * realloc(pointer_to_old_allocation, int size);*/

/* free(): Deallocate
written as: void free(pointer_to_dynamic_memory)*/