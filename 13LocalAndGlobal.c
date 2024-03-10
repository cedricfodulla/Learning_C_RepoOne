// This program differentiates a local and global variables used in functions

#include <stdio.h>

int a = 5;
int loc()
{
    int a = 6;
    printf("Value of a in Loc: %d", a);
}

int main()
{
    loc();
    printf("\nValue of a in Main: %d", a);
}