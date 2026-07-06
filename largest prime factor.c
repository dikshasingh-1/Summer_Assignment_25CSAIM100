#include <stdio.h>

int main() {
    long long n, maxPrime = -1;
    if (scanf("%lld", &n) != 1) return 1;
    while (n % 2 == 0) {
        maxPrime = 2;
        n >>= 1;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
    }
    if (n > 2)
        maxPrime = n;
    printf("%lld", maxPrime);
    return 0;
}