#include <stdio.h>

int main()
{
    double a = 10.23, *b;
    b = &a;
    printf("\n a=%lf", a);       // we showed here a total of 8 digits since the variable is a double
    printf("\n a+1=%lf", a + 1); // we added 1 integer value to the value of a (10.23+1 = 11.23)
    printf("\n\n b=%d", b);      // we showed here the address of the variable a
    printf("\n b+1=%d", b + 1);  // we added 8 bits to the address of variable a since it is a double and adding 1 means adding the value of a double which is 8 bits
    return 0;
}

//%lf is long float
// Note that if we add up a number/integer to a pointer, the amount that the variable data type (i.e. int is 4 bits) occupies will be added to the pointer
// If the value of the integer data type pointer p is 678868 and we added 1, we will get 678872 (678868+4=678872)