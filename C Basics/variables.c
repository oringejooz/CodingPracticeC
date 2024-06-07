#include <stdio.h>


int main()
{
//type variable_name = value;

int myNUm = 10;//Declaration + Assignment
char myChar = 'S';
float myFloat = 1.245;

/*Format specifiers are used together with the printf()
 function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.*/

printf("%d - is an INTEGER\n",myNUm);
//use %c for char and %f for float
printf("%c - is an CHARACTER\n",myChar);
printf("%f - is a FLOAT\n",myFloat);
int x,y,z;
x=y=z=50;
printf("%d",x+y+z);


return 0;
}