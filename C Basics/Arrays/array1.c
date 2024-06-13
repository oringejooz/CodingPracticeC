#include <stdio.h>

int main()
{
int myNum[]={2,4,6,8};
printf("%d\n",myNum[2]);
for(int i=0;i<sizeof(myNum)/sizeof(myNum[0]);i++){
    printf("%d ",myNum[i]);
}
myNum[1] = 8;
printf("\n");
for(int i=0;i<sizeof(myNum)/sizeof(myNum[0]);i++){
    printf("%d ",myNum[i]);
}

return 0;
}