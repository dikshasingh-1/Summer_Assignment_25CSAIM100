#include <stdio.h>

int main() {
    int n, count = 0;
    if (scanf("%d", &n) != 1) return 1;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    printf("%d", count);
    return 0;
}