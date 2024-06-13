#include <stdio.h>

int main() {
    int i = 1;

    // First While Loop
    while (i <= 10) {
        if (i == 4) {
            break;
        }
        printf("%d ", i);
        i++;
    }
    printf("\n");

    i = 1;

    // Second While Loop
    while (i <= 10) {
        if (i == 4) {
            i++;
            continue;
        }
        printf("%d ", i);
        i++;
    }

    return 0;
}
