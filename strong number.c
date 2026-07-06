#include <stdio.h>

int main() {
    int num, originalNum, rem, sum = 0;
    if (scanf("%d", &num) != 1) return 1;
    originalNum = num;
    while (num > 0) {
        rem = num % 10;
        int fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }
    if (sum == originalNum)
        printf("Yes");
    else
        printf("No");
    return 0;
}