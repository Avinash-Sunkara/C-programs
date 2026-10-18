#include <stdio.h>
int main(void) {
    int year;
    if (scanf("%d", &year) != 1 || year < 1) return 1;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) puts("Leap year");
    else puts("Not a leap year");
    return 0;
}
