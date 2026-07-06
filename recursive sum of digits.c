#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    if (n < 0) n = -n;
    printf("%d", sumOfDigits(n));
    return 0;
}