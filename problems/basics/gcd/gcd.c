#include <stdio.h>
int main(void) {
    unsigned int a, b;
    if (scanf("%u %u", &a, &b) != 2) return 1;
    while (b != 0) { unsigned int r = a % b; a = b; b = r; }
    printf("%u\n", a);
    return 0;
}
