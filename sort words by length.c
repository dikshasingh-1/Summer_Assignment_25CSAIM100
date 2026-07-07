#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char word[100][100], temp[100];

    for (int i = 0; i < n; i++)
        scanf("%s", word[i]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strlen(word[i]) > strlen(word[j])) {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    for (int i = 0; i < n; i++)
        printf("%s\n", word[i]);

    return 0;
}