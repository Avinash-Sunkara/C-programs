#include <stdio.h>
int main(void) {
    int n, a[1000], target, index = -1;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &a[i]) != 1) return 1;
    if (scanf("%d", &target) != 1) return 1;
    for (int i = 0; i < n; i++) if (a[i] == target) { index = i; break; }
    printf("%d\n", index);
    return 0;
}
