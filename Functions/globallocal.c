#include <stdio.h>
int x =5;//global

void myFun(){
    printf("%d\t",x);
}

void myFun2(){
    int x=10;
    printf("%d\t",x);
}
//global variables, can be accessed and modified from any function

void myFun3(){
    ++x;
}

int main()
{
    myFun();
    myFun2();
    myFun3();
    myFun();
    return 0;
}