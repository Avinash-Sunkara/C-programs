#include <stdio.h>
int main(void) {
    int n, a[1000], target, found = -1;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &a[i]) != 1) return 1;
    if (scanf("%d", &target) != 1) return 1;
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == target) { found = mid; break; }
        if (a[mid] < target) low = mid + 1; else high = mid - 1;
    }
    printf("%d\n", found);
    return 0;
}
