#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "Cedric", i;
    char b[] = " Wayne";
    printf("My name is ");
    for (i = 0; i < 6; i++)
    {
        printf("%c", a[i]);
    }
    printf("\nThe length of the name string is %d, which is '%s'", strlen(a), a);
    printf("\nAdding two strings results in %s", strcat(a, b));
}

/*My name is Cedric
The length of the name string is 6, which is 'Cedric'
Adding two strings results in Cedric Wayne*/