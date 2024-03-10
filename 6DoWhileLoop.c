// This program uses Do-While Loop
#include <stdio.h>

int main()
{
    int num = 1;
    do
    {
        printf("\n%d", num); // if I place '&' before num here (as in &num), the output will print 10 copies of 6422300 and I do not know why
        num++;
    } while (num <= 10);
}