#include <stdio.h>
//Function to convert Fahrenheit to Celsius

float fahrenheitToCelsius(float fah){
    return (5.0 / 9.0) * (fah- 32.0);
}

int main()
{

float f_value = 98.8;
float res = fahrenheitToCelsius(f_value);

printf("Celsius value of %.2f : %.2f",f_value,res);
return 0;
}