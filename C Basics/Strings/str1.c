#include <stdio.h>
int main()
{
char *str1 = "HI Swar";
printf("%s\n",str1);
char str2[] = "Swarnima";
printf("%s",str2);
str2[0]='J';
printf("\n%s",str2);
int len = sizeof(str2)/sizeof(str2[0]);
for(int i=0;i<len;i++){
    printf('%c\n',str2[i]);
}
return 0;
}