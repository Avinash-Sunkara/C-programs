#include <stdio.h>
int main(void) {
    int n, a[1000];
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &a[i]) != 1) return 1;
    for (int i = n - 1; i >= 0; i--) printf("%d%s", a[i], i == 0 ? "\n" : " ");
    return 0;
}
