#include <stdio.h>

void myFun2(char name[],int age){
    printf("Hello %s. You are %d years old.\n", name, age);
}

int sumOfArrays(int arr[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

void inputArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("Enter Element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
}


int main()
{
int arr[5];
inputArray(arr,5);

printf("%d\n",sumOfArrays(arr,5));
myFun2("Swarnima",21);
return 0;
}