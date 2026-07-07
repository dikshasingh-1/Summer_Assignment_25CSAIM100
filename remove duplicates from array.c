#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    int arr[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }
    int j = 0;
    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;
        for (int k = 0; k < j; k++) {
            if (arr[i] == arr[k]) {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate) {
            arr[j++] = arr[i];
        }
    }
    for (int i = 0; i < j; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}