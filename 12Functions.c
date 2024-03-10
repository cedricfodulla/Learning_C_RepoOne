// This program will add two numbers entered by the user and with the help of user-defined functions

#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("The sum of the numbers you entered is %d", add(x, y));
}