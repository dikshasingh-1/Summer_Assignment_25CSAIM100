#include <stdio.h>

int main() {
    int arr[100], n, i, ch, pos, value, key, found;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\n1.Display\n2.Insert\n3.Delete\n4.Search\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                printf("Array: ");
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 2:
                printf("Enter position and value: ");
                scanf("%d%d", &pos, &value);

                if(pos < 1 || pos > n + 1) {
                    printf("Invalid position\n");
                    break;
                }

                for(i = n; i >= pos; i--)
                    arr[i] = arr[i - 1];

                arr[pos - 1] = value;
                n++;
                printf("Inserted successfully\n");
                break;

            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &pos);

                if(pos < 1 || pos > n) {
                    printf("Invalid position\n");
                    break;
                }

                for(i = pos - 1; i < n - 1; i++)
                    arr[i] = arr[i + 1];

                n--;
                printf("Deleted successfully\n");
                break;

            case 4:
                printf("Enter element to search: ");
                scanf("%d", &key);

                found = 0;
                for(i = 0; i < n; i++) {
                    if(arr[i] == key) {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Element not found\n");
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(ch != 5);

    return 0;
}