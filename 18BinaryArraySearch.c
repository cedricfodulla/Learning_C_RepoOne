// Linear Search and Binary Search
// In linear search, array values can be in any particular order i.e. {34,21,55,65}
// In binary search, array values should be in order i.e. {1,2,3,4} or {2,6,9,20}
#include <stdio.h>

int main()
{
    int A[10], i, j, key, low, high, mid;
    printf("Enter the number of elements: "); // Number of elements input by user
    scanf("%d", &j);

    printf("Enter %d number of elements below: ", j); // User will input all the elements
    for (i = 0; i < j; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("\nEnter key value to search:"); // User will be asked to input what key is needed to be found
    scanf("%d", &key);

    // Main Logic
    /*
     */
    low = 0;
    high = j - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (A[mid] == key)
        {
            printf("\nKey is found at %d%c place", mid + 1, A[append]);
            break;
        }
        else if (A[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (low > high)
    {
        printf("\nKey is not found");
        return 0;
    }
}

/*Binary search
Find 23:

2   5   8   12   16   23   38   56   72   91
0   1   2    3    4    5    6    7    8    9
Low              Mid                      High
Use Formula: (Low+High)/2
(0+9)/2 = 4.5 (round down) = 4 (4th index which is 16)

2   5   8   12   16   23   38   56   72   91
0   1   2    3    4    5    6    7    8    9
Low              Mid                       High
We know that 23 > 16
Therefore, consider the right part of the low-high range(from mid to high)
Update the Low to be Mid+1
Mid + 1 = 4 + 1 = 5 (5th index will be the new Low)

2   5   8   12   16   23   38   56   72   91
0   1   2    3    4    5    6    7    8    9
                      Low       Mid       High
By using the formula again: (Low+High)/2
(5+9)/2 = 7 (7th index will be the new Mid)

2   5   8   12   16   23   38   56   72   91
0   1   2    3    4    5    6    7    8    9
                      Low  High
We know that 23 < 56
Therefore, consider the left part of the low-high range(from low to mid)

2   5   8   12   16   23   38   56   72   91
0   1   2    3    4    5    6    7    8    9
                      Low  High
By using the formula again: (Low+High)/2
(5+6)/2 = 5.5 (round down) = 5 (5th index will be the answer)

We now have searched for 23 using Binary search by following the steps above.
These steps can be summarized as shown below
1. Identify first and last element and mark them as Low and High, respectively.
2. Identify the Mid by using the formula (Low+High)/2
3. If the element in the Mid index is less than what we are looking for, use the left part.
If the element in the Mid index is greater than what we are looking for, use the right part.
4. Repeat these steps by updating the Low, High, and Mid indexes.
*/