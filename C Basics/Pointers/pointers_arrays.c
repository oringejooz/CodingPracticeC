#include <stdio.h>


int main()
{
int arr[]={23,44,13,8,71};

for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    printf("%p\t%d\n",&arr[i],arr[i]);
}

printf("The memory address of the first element is the same as the name of the array:");
printf("%p\n", arr);
printf("%p\n", &arr[0]);

printf("%d",*arr);

return 0;
}