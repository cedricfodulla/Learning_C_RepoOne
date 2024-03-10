#include <stdio.h>

int main()
{
    int num1, num2;
    for (num1 = 1; num1 <= 3; num1++)
    {
        for (num2 = 1; num2 <= 3; num2++)
        {
            printf("\n%d", num2);
            // putting printf("\n"); here will make a loop of 1 2 3 1 2 3 1 2 3 vertically
        }
        // putting printf("\n"); here will make a loop of 123 123 123 vertically
    }
}
// not putting extra printf("\n"); will rsult to 123123123 vertically

/*Vertically means
1
2
3
1
2
3
1
2
3*/