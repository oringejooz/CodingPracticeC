#include <stdio.h>


int main()
{
int myNum = 35;
printf("%p\n",&myNum);

//& is Reference Operator
//A pointer is a variable that stores the memory address of another variable of the same data type as its value
//it is denoted by * . EG: int *ptr;

int * ptr = &myNum;
printf("%p\n",ptr);
printf("%d\n",*ptr);
//*ptr is used for dereferencing *ptr means value at ptr

int **ptr2 = &ptr;

int ***ptr3 = &ptr2;

printf("%p\t%p\n",ptr2,ptr3);
printf("%d\t%d",**ptr2,***ptr3);

return 0;
}