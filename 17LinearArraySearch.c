// Linear Search and Binary Search
// In linear search, array values can be in any particular order i.e. {34,21,55,65}
// In binary search, array values should be in order i.e. {1,2,3,4} or {2,6,9,20}

#include <stdio.h>

int main()
{
    int A[5], i, j, key; // Variable Declaration

    printf("Enter the number of elements: "); // Number of elements input by user
    scanf("%d", &j);

    printf("Enter %d number of elements below: ", j); // User will input all the elements
    for (i = 0; i < j; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("\nEnter key value to search:"); // User will be asked to input what key is needed to be found
    scanf("%d", &key);
    
    //Main Logic
    /*As long as the i (number of elements) is not yet equal to the
    key (the number that user wants to find), the loop will not stop
    and will continue. If it finds it, it will output that the system
    has found it at its place and will tell otherwise if not found*/
    for (i = 0; i < j; i++)
    {
        if (key == A[i])
        {
            printf("\n Key is found at %d", i + 1);
            break;
        }
    }

    if (i == j)
    {
        printf("\n Key is not found");
    }
}
