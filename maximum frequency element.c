#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    int arr[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }
    int max_element = arr[0], max_count = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            max_element = arr[i];
        }
    }
    printf("%d", max_element);
    return 0;
}