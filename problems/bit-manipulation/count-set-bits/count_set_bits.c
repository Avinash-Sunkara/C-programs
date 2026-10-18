#include <stdio.h>
int main(void) {
    unsigned int value;
    int count=0;
    if (scanf("%u", &value) != 1) return 1;
    while (value != 0) { value &= value - 1; count++; }
    printf("%d\n", count);
    return 0;
}
