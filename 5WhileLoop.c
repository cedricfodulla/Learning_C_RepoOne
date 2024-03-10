// This program uses While Loop and will ask a number between 1 and 10 and will stop if it is not in between those two numbers
// I used a floating point here to allow decimal points in user input

#include <stdio.h>

int main()

{
    float num;
    printf("Enter a number between 1 and 10: ");
    scanf("%f", &num);
    while (num >= 1 && num <= 10)
    {
        printf("Enter a number between 1 and 10: ");
        scanf("%f", &num);
    }
}