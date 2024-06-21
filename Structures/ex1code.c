#include <stdio.h>
#include <stdlib.h>

#define MOD 1000000007

// Function to compute Fibonacci number modulo MOD
int fibonacci(int n) {
    int a = 1, b = 1, c;
    if (n == 1) return a;
    
    for (int i = 2; i <= n; ++i) {
        c = (a + b) % MOD;
        a = b;
        b = c;
    }
    return b;
}

// Do not edit this part of code

int main() {
    int t;
    scanf("%d", &t);
    
    while (t-- > 0) {
        int n;
        scanf("%d", &n);
        int fib = fibonacci(n);
        printf("%d\n", fib);
    }
    
    return 0;
}
