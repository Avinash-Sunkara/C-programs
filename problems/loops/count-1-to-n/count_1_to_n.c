#include <stdio.h>

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1 || n < 1) {
        fprintf(stderr, "Please enter a whole number greater than 0.\n");
        return 1;
    }

    for (long long number = 1; number <= n; number++) {
        printf("%d", number);
        if (number < n) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
