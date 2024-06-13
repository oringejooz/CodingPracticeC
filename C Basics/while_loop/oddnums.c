#include <stdio.h>
int main()
{
int num;
scanf("%d",&num);
int n=1,count =0;

while (count<num)
{
    printf("%d ",n);
    n+=2;
    count++;
}


return 0;
}