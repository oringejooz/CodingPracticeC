#include <stdio.h>
int main()
{
int i =5;
while (i>0)
{
    printf("%d ",i);
    i--;
}
printf("\n");
int j =5;

do{
    printf("Hello %d\n",j);
    j--;
}
while (j>0);

return 0;
}