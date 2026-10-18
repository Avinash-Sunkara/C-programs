#include <stdio.h>
#include <string.h>
int main(void) {
    char s[1000];
    if (fgets(s, sizeof s, stdin) == NULL) return 1;
    size_t n = strlen(s);
    if (n > 0 && s[n-1] == '\n') s[--n] = '\0';
    for (size_t i=0; i<n/2; i++) { char t=s[i]; s[i]=s[n-1-i]; s[n-1-i]=t; }
    puts(s);
    return 0;
}
