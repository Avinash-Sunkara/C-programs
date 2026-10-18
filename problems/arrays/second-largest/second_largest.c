#include <stdio.h>
int main(void) {
    int n, x, largest = 0, second = 0, has_largest = 0, has_second = 0;
    if (scanf("%d", &n) != 1 || n < 2 || n > 1000) return 1;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &x) != 1) return 1;
        if (!has_largest || x > largest) {
            if (has_largest) { second = largest; has_second = 1; }
            largest = x;
            has_largest = 1;
        }
        else if (x < largest && (!has_second || x > second)) { second = x; has_second = 1; }
    }
    if (!has_second) puts("No second largest"); else printf("%d\n", second);
    return 0;
}
