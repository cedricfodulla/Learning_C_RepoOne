#include <stdio.h>

int a[3] = {1, 2, 3};
int b[3][3] = {9, 8, 7,
               6, 5, 4,
               3, 2, 1};
int i, j, k;

int main()
{
    // printf("%d", a[3][3]); This is a wrong calling of an array

    for (i = 0; i < 3; i++) // prints the one-dimensional array
    {
        printf("%d\n", a[i]);
    }

    printf("\n");

    for (j = 0; j < 3; j++) // prints the array in different line per number
    {
        for (k = 0; k < 3; k++)
        {
            printf("%d\n", b[j][k]);
        }
    }

    printf("\n");

    for (j = 0; j < 3; j++) // prints the array in different rows (by 3s)
    {
        for (k = 0; k < 3; k++)
        {
            printf("%d", b[j][k]);
        }
        printf("\n");
    }
}

/*
The first for loop prints the one dimensional array like this:
1
2
3
*/

/*
The second for loop prints the two dimensional array like this:
9
8
7
6
5
4
3
2
1
*/

/*
The third for loop prints the two dimensional array like this:
987
654
321
*/