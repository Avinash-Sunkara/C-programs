#include <stdio.h>
int main(void) {
    int n, prime = 1;
    if (scanf("%d", &n) != 1) return 1;
    if (n < 2) prime = 0;
    for (int d = 2; prime && d <= n / d; d++) if (n % d == 0) prime = 0;
    puts(prime ? "Prime" : "Not prime");
    return 0;
}
