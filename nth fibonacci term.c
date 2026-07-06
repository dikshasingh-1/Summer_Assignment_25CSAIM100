#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    if (scanf("%d", &n) != 1) return 1;
    if (n == 1) {
        printf("%d", t1);
        return 0;
    }
    for (int i = 2; i <= n; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("%d", t1);
    return 0;
}