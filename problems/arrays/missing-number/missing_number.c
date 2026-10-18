#include <stdio.h>

int main(void)
{
    int n, value;
    if (scanf("%d", &n) != 1 || n < 2 || n > 1001) return 1;

    int missing = 0;
    for (int number = 1; number <= n; number++) missing ^= number;
    for (int i = 0; i < n - 1; i++) {
        if (scanf("%d", &value) != 1 || value < 1 || value > n) return 1;
        missing ^= value;
    }
    printf("%d\n", missing);
    return 0;
}
