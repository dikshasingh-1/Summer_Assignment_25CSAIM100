#include <stdio.h>

int main() {
    int num, remainder, reversedNum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num;

    while (temp != 0) {
        remainder = temp % 10;
        reversedNum = reversedNum * 10 + remainder;
        temp /= 10;
    }

    printf("Reversed number of %d = %d\n", num, reversedNum);

    return 0;
}