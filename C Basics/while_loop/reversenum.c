#include <stdio.h>
int main()
{
int num;
scanf("%d",&num);
int rev = 0;
while (num)
{
    rev = rev* 10 + num%10;
    num/=10;
}

printf("Reversed number = %d",rev);

return 0;
}