#include <stdio.h>

int main() {
    int num, remainder, reversedNum = 0, originalNum;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    int temp = num;
    while (temp > 0) {
        remainder = temp % 10;
        reversedNum = reversedNum * 10 + remainder;
        temp /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }

    return 0;
}