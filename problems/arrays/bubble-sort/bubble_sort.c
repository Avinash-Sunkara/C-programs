#include <stdio.h>
int main(void) {
    int n, a[1000];
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &a[i]) != 1) return 1;
    for (int end = n - 1; end > 0; end--) {
        int changed = 0;
        for (int i = 0; i < end; i++) if (a[i] > a[i + 1]) { int t=a[i]; a[i]=a[i+1]; a[i+1]=t; changed=1; }
        if (!changed) break;
    }
    for (int i=0; i<n; i++) printf("%d%s", a[i], i==n-1 ? "\n" : " ");
    return 0;
}
