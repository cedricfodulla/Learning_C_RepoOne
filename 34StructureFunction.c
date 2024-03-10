#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    char gender;
    int marks[5];
};

void display(struct student A)
{
    int i;
    printf("Name: %s\n", A.name);
    printf("Roll: %d\n", A.roll);
    printf("Gender: %c\n", A.gender);
    for (i = 0; i < 5; i++)
    {
        printf("Marks in %dth subject: %d\n", i, A.marks[i]);
    }
}

void main()
{
    struct student s1 = {101, "cbit", 'M', {76, 85, 95, 74, 92}};
    display(s1);
}