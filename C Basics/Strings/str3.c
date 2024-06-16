#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello Swarnima";
    char str2[] = "Hi Aari";

    printf("%d\n",strlen(str1));
    strcat(str1,str2);
    printf("%s\n",str1);
    strcpy(str2,str1);
    printf("%s\n",str2);
    printf("%d\n",strcmp("Hi","Hi"));
    printf("%d\n",strcmp("Hi","Hi_"));

    char str3[30];
    fgets(str3,sizeof(str3),stdin);

    printf("%s\n",str3);
    return 0;
}