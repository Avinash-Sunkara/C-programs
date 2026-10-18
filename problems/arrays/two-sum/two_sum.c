#include <stdio.h>

int main(void)
{
    int n, values[1000], target;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d", &target) != 1) return 1;

    for (int first = 0; first < n; first++) {
        for (int second = first + 1; second < n; second++) {
            if ((long long)values[first] + values[second] == target) {
                printf("%d %d\n", first, second);
                return 0;
            }
        }
    }
    puts("No solution");
    return 0;
}
