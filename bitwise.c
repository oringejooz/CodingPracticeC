// For each number i from 1 through n, find the maximum value of the bitwise AND, OR and XOR when compared against all integers
// through n that are greater than i

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
   int i=1;
   while(i<n){
    int j = i+1;

    int and_ = i&j;
   }
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}