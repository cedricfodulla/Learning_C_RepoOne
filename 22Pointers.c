// pointers and addresses
#include <stdio.h>

int main()
{
    int a, *p;
    p = &a; // p will store the address of a
    int pntr = printf("%d", p);
    int adrs = printf("\n\n%d", &a);

    //& a reference operator and is used in scanf statement which tells us that we want to store something to the address of a variable i.e. &a
    //&& is logical AND
    //* is a dereference operator

    // I tried to make a comparison with the pointer and the address and it outputs they are not the same
    /*
    if (&pntr == adrs)
    {
        printf("\nThey work the same way.");
    }
    else
    {
        printf("\nThey are not the same.");
    }
    */
}

// Why do we use pointers?
// Pointers are used in situations when passing actual values is difficult or not defined
// To return more than one value from a function
// It increases the execution speed
// It is more efficient in handling data types
// It reduces the length and complexity of the programs