#include <stdio.h>
int main()
{
//Implicit Conversion
float x =9;
printf("%f\n",x);
int y = 9.99;
printf("%d\n",y);

float div= 5/2;
printf("%f\n",div);//output 2.000000 cuz 5 & 2 ARE STILL INTEGERS IN DIVISION

// Explicit Conversion

div = (float)5/2;
printf("%f\n",div);//output 2.5000000

int n1 = 4;
int n2 = 3;
div = (float)n1/n2;

printf("%f", div);

}