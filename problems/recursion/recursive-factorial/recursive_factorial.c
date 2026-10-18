#include <stdio.h>
unsigned long long factorial(unsigned int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) return 1;
    printf("%llu\n", factorial((unsigned int)n));
    return 0;
}
