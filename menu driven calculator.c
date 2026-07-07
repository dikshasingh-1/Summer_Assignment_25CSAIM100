#include <stdio.h>

int main() {
    int ch;
    float a, b;

    do {
        printf("\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        if (ch >= 1 && ch <= 4) {
            printf("Enter two numbers: ");
            scanf("%f%f", &a, &b);
        }

        switch (ch) {
            case 1:
                printf("Result = %.2f\n", a + b);
                break;
            case 2:
                printf("Result = %.2f\n", a - b);
                break;
            case 3:
                printf("Result = %.2f\n", a * b);
                break;
            case 4:
                if (b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Division by zero not possible\n");
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (ch != 5);

    return 0;
}