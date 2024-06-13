#include <stdio.h>
//Print first n even numbers
int main()
{
int num;
int n=0;
scanf("%d",&num);
for(int i=0;i<num;i++){
    printf("%d ",n);
    n+=2;
}
return 0;
}