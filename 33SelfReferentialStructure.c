// Self referential structure helps us start from the beginning of a structure again
#include <stdio.h>

struct student
{
    int htno;
    double cgpa;
    char name[20];
    struct student *next;
};

int main()
{
    struct student s1 = {101, 9.3, "cbit"};
    struct student s2 = {102, 8.3, "mgit"};
    struct student s3 = {103, 7.3, "it"};
    struct student s4 = {104, 6.3, "hyd"};
    struct student *p;
    s1.next = &s2;
    s2.next = &s3;
    s3.next = &s4;
    s4.next = NULL;
    p = &s1;
    while (p != NULL)
    {
        printf("\n%d %f %s", p->htno, p->cgpa, p->name);
        p = p->next;
    }
}