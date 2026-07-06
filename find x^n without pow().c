#include <stdio.h>

int main() {
    double x, result = 1.0;
    int n, absN;
    if (scanf("%lf %d", &x, &n) != 2) return 1;
    absN = n < 0 ? -n : n;
    for (int i = 0; i < absN; i++) {
        result *= x;
    }
    if (n < 0) {
        result = 1.0 / result;
    }
    printf("%lf", result);
    return 0;
}