#include <stdio.h>
int myFun1(int a,int b);//FUnction Declaration

void myFunc(char ch[]){
    printf("Hello %s\n",ch);
    printf("%d",myFun1(2,3));
}



//void means function has no return value
int main()
{
myFunc("Swar");//Function call
return 0;
}

int myFun1(int a,int b){
    return a+b;
}