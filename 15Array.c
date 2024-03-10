#include <stdio.h>

// How to write 1-dimensional Array
// int a[number of elements]= {element1,element2,elementN};
// int values store 4 memory locations

int a[3] = {1, 2, 5};
int b[] = {1, 2, 3};

int main()
{
    printf("%d\n", a[0]);  // we will print the value in index 0 "a[0]"
    printf("%d\n", &a[0]); // we will print the location(address) of index 0 "&a[0]"
    printf("%d\n", &a[1]); // we will print the location(address) of index 1 "&a[1]"
    printf("%d", b[0]);    // we will print the value in index 0 "b[0]"
}

/*
-- The first printf outputs the value that is stored in index 0, which is 1
-- The second printf outputs the location or address of the index 0, which in my machine is 4210692
-- The third printf outputs the location or address of the index 1, which in my machine is 4210696
-- We can justify that int values takes up FOUR memory locations. For index a[0] it will be 4210692, 4210693, 4210694, and 4210695.
*/