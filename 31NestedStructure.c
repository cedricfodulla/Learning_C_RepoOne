// Nested Structure - a structure inside a structure
#include <stdio.h>

int main()
{
    struct student
    {
        int roll_no;
        char name[20];
        struct address
        {
            int plotno;
            char area[20];
        } A;
    };
}