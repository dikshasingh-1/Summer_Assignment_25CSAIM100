#include <stdio.h>

int main() {
    int rows;
    if (scanf("%d", &rows) != 1) return 1;
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}