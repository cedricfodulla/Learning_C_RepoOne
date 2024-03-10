// This program uses 'goto' statement to identify whether a number is an even or an odd number

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }
even:
    printf("%d is an even number", a); // There is an error here
odd:
    printf("%d is an odd number", a);
    return 0;
}