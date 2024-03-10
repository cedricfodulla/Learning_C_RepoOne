// This program differentiates a continue and a break
// Break statement will transfer control to the next statement after the loop
// Continue statement will transfer control to the next iteration in the loop
#include <stdio.h>

int main()
{
    int a;
    for (a = 1; a <= 10; a++)
    {
        if (a == 2)
        {
            printf("This number will be disregarded");
            printf("\n");
            continue; /*Continue statement disregards 2 in the output and will not show it but still continue with the next iteration in the loop until a reaches 10*/
        }
        else if (a == 5)
        {
            printf("This number will end the loop");
            break; /*Break statement will break the loop at a == 5 thus transferring control to the next statement that is outside the loop which is the "printf("End of the loop");"" */
        }
        printf("%d", a);
        printf("\n");
    }
    printf("\n");
    printf("End of the loop");
}