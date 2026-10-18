#include <stdio.h>
int main(void) {
    int n;
    unsigned long long result = 1;
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) return 1;
    for (int i = 2; i <= n; i++) result *= (unsigned long long)i;
    printf("%llu\n", result);
    return 0;
}
