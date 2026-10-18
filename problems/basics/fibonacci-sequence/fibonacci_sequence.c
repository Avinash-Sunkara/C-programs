#include <stdio.h>

int main(void)
{
    int count;
    unsigned long long previous = 0, current = 1;
    if (scanf("%d", &count) != 1 || count < 1 || count > 94) return 1;

    for (int i = 0; i < count; i++) {
        printf("%llu%s", previous, i == count - 1 ? "\n" : " ");
        if (i < count - 1) {
            unsigned long long next = previous + current;
            previous = current;
            current = next;
        }
    }
    return 0;
}
