//const keyword - unchangeable and read-only

#include <stdio.h>
int main()
{
    const int num = 5;
    // num = 2;//assignment of read-only variable 'num'
    const int minutesPerHour = 60;
    const float PI = 3.14;
    //When you declare a constant variable, it must be assigned with a value
    return 0;
}