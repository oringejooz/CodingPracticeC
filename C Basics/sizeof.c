//Using the sizeof() operator

#include <stdio.h>
int main()
{
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));

//%lu sizeof operator returns a long unsigned int 

    return 0;
}