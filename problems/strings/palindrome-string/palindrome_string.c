#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main(void) {
    char s[1000];
    if (fgets(s, sizeof s, stdin) == NULL) return 1;
    size_t left=0, right=strlen(s);
    while (right>0 && s[right-1]=='\n') right--;
    int ok=1;
    if (right>0) right--;
    while (left<right) {
        while (left<right && !isalnum((unsigned char)s[left])) left++;
        while (left<right && !isalnum((unsigned char)s[right])) right--;
        if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])) { ok=0; break; }
        left++; right--;
    }
    puts(ok ? "Palindrome" : "Not palindrome");
    return 0;
}
