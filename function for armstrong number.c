#include <stdio.h>
#include <math.h>

int armstrong(int n) {
    int temp = n, rem, sum = 0, digits = 0;

    while(temp != 0) {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while(temp != 0) {
        rem = temp % 10;
        sum = sum + pow(rem, digits);
        temp = temp / 10;
    }

    if(sum == n)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(armstrong(num))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}