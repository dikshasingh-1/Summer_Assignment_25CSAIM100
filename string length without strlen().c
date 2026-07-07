#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i = 0;

    printf("Enter a string: ");
    gets(str);

    while(str[i] != '\0') {
        length++;
        i++;
    }

    printf("Length of string = %d", length);

    return 0;
}