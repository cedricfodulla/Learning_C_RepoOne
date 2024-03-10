// Structures are user-defined data type that has members of heterogeneous(different) data types
// Structures are written the same way functions are written, before the main function

#include <stdio.h>

// Structure definition
struct student
{
    int htno;
    float cgpa;
    char gender;
};

int main()
{
    // structure variable with initialization
    // struct student s1 = {101, 'M', 8.3};
    struct student s1; // structure variable
    printf("\n Enter HTNO, cgpa, and gender: ");
    scanf("%d %f %c", &s1.htno, &s1.cgpa, &s1.gender);

    struct student *s2;
    s2 = &s1;

    printf("\nHTNO = %d, Gender = %c, cgpa = %f", s2->htno, s2->gender, s2->cgpa);
    return 0;
}

/*Syntax for making a structure

struct structure_name
{
    datatype member1;
    datatype member2;
};

*/

/* Accessing data available in structure variable
. (dot operator) - access with normal variable
-> (arrow operator) - access with pointer variable
*/

/* Sample structure
struct Books
{
    char title[50];
    char author[50];
    int book_id; // we cannot have spaces in initializations, instead we usually use underscore as spacing
} book;
*/