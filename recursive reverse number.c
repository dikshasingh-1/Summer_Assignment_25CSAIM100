#include <stdio.h>

int reverseNumber(int n, int rev) {
    if (n == 0) return rev;
    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    int sign = (n < 0) ? -1 : 1;
    if (n < 0) n = -n;
    printf("%d", sign * reverseNumber(n, 0));
    return 0;
}