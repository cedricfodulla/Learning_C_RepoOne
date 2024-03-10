// This program will create a pascal's triangle of n rows
/* This is my attempt -_-
#include <stdio.h>

int main()
{
    int rows, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows-; j++)
        {

            printf("%d", j);
        }
        printf("\n");
    }
}
*/

// From the internet -_- hard bruh

#include <stdio.h>
int factorial(int n)
{
    int f;

    for (f = 1; n > 1; n--)
        f *= n;

    return f;
}

int ncr(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}

int main()
{
    int n, i, j;

    printf("Enter number of rows excluding first row: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n - i; j++)
            printf("  ");

        for (j = 0; j <= i; j++)
            printf(" %3d", ncr(i, j));

        printf("\n");
    }
    return 0;
}

// Created in Bootcamp
// #include <stdio.h>
