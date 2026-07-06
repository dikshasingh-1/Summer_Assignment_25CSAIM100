#include <stdio.h>

int main() {
    int num, sum = 0;
    if (scanf("%d", &num) != 1) return 1;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num && num > 0)
        printf("Yes");
    else
        printf("No");
    return 0;
}