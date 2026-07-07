#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("Q1. Capital of India?\n");
    printf("1.Delhi\n2.Mumbai\n3.Kolkata\n4.Chennai\n");
    scanf("%d", &ans);
    if (ans == 1)
        score++;

    printf("Q2. 5 + 7 = ?\n");
    printf("1.10\n2.11\n3.12\n4.13\n");
    scanf("%d", &ans);
    if (ans == 3)
        score++;

    printf("Q3. C language developed by?\n");
    printf("1.Dennis Ritchie\n2.James Gosling\n3.Bjarne Stroustrup\n4.Guido van Rossum\n");
    scanf("%d", &ans);
    if (ans == 1)
        score++;

    printf("Your Score = %d/3\n", score);

    return 0;
}