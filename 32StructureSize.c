#include <stdio.h>

struct student
{
    int htno;
    char name[13];
    double cgpa;
};

int main()
{
    struct student s2;
    printf("\n size of (htno): %d", sizeof(s2.htno)); // 4
    printf("\n size of (name): %d", sizeof(s2.name)); // 13
    printf("\n size of (cgpa): %d", sizeof(s2.cgpa)); // 8
    printf("\n size of (s2): %d", sizeof(s2));        // 25 expected but 32 is what the output is
}

// Extra 7 bits (depending on your system) of memory is used for packing in structures.
// That is why we are getting 32 when we print the size of structure student instead of 25