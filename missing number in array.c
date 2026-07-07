#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    int total_sum = (n * (n + 1)) / 2;
    int current_sum = 0, val;
    for (int i = 0; i < n - 1; i++) {
        if (scanf("%d", &val) == 1) {
            current_sum += val;
        }
    }
    printf("%d", total_sum - current_sum);
    return 0;
}