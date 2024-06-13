#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int scoreOfString(char* s) {
    
    int res=0;
    for (int i = 0; i < strlen(s) - 1; i++) {
        res += abs(s[i] - s[i + 1]); // Calculate absolute difference between consecutive characters
    }

    return res;

}

int main()
{
int score = scoreOfString("hello");
printf("%d",score);
return 0;
}