#include <stdio.h>

int main() {
    char name[50];
    int m1, m2, m3, total;
    float percent;

    printf("Enter Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Marks of 3 Subjects: ");
    scanf("%d%d%d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percent = total / 3.0;

    printf("\nMarksheet\n");
    printf("Name: %s\n", name);
    printf("Total: %d\n", total);
    printf("Percentage: %.2f\n", percent);

    if (percent >= 40)
        printf("Result: Pass");
    else
        printf("Result: Fail");

    return 0;
}