#include <stdio.h>
void swap(int *a, int *b) { int temp=*a; *a=*b; *b=temp; }
int main(void) {
    int a,b;
    if (scanf("%d %d", &a, &b) != 2) return 1;
    swap(&a,&b);
    printf("%d %d\n", a,b);
    return 0;
}
