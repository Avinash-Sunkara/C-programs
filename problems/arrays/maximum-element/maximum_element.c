#include <stdio.h>
int main(void) {
    int n, x, largest;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000 || scanf("%d", &largest) != 1) return 1;
    for (int i = 1; i < n; i++) { if (scanf("%d", &x) != 1) return 1; if (x > largest) largest = x; }
    printf("%d\n", largest);
    return 0;
}
