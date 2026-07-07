#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == '\n')
            continue;
        for (int j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                printf("%c ", s1[i]);
                break;
            }
        }
    }

    return 0;
}