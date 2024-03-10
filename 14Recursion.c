// This program uses recursion to create a loop-like function of counting number from 10 to 1

#include <stdio.h>

int rec(int a)
{
    if (a == 0) // Base condition
    {
        return 0;
    }
    printf("%d\n", a);
    rec(a - 1); // Recursive function call
}
int main()
{
    rec(10);
}