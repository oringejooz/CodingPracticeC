#include <stdio.h>


int main()
{
    int myNum[] = {23,44,13,8,71};
    printf("%d\n", *(myNum + 1));
    printf("%d\n", *(myNum + 2));

    printf("\nPrinting array using pointer :\n");
    for (int i = 0; i < sizeof(myNum)/sizeof(myNum[0]); i++) {
        printf("%d\n", *(myNum + i));
    }

    *myNum = 13;
    *(myNum +1) = 17;
    printf("\nPrinting array using pointer :\n");
    for (int i = 0; i < sizeof(myNum)/sizeof(myNum[0]); i++) {
        printf("%d\n", *(myNum + i));
    }

    return 0;
}