#include <stdio.h>

int sumOfNum(int z);

int main()
{
printf("%d",sumOfNum(10));
return 0;
}

int sumOfNum(int z){
    if(z>0){
        return z + sumOfNum(z-1);
    }else{
        return 0;
    }
}

