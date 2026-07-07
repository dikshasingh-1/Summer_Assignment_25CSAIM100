#include <stdio.h>

struct Book {
    int id;
    char title[50];
    int issued;
};

int main() {
    struct Book b[100];
    int n = 0, choice, id, i, found;

    while (1) {
        printf("\n1.Add Book\n2.Display Books\n3.Issue Book\n4.Return Book\n5.Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &b[n].id);
                printf("Enter Title: ");
                scanf(" %[^\n]", b[n].title);
                b[n].issued = 0;
                n++;
                break;

            case 2:
                for (i = 0; i < n; i++) {
                    printf("\nID:%d\nTitle:%s\nStatus:%s\n",
                           b[i].id, b[i].title,
                           b[i].issued ? "Issued" : "Available");
                }
                break;

            case 3:
                printf("Enter Book ID: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (b[i].id == id) {
                        b[i].issued = 1;
                        found = 1;
                        printf("Book Issued\n");
                        break;
                    }
                }
                if (!found)
                    printf("Book Not Found\n");
                break;

            case 4:
                printf("Enter Book ID: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (b[i].id == id) {
                        b[i].issued = 0;
                        found = 1;
                        printf("Book Returned\n");
                        break;
                    }
                }
                if (!found)
                    printf("Book Not Found\n");
                break;

            case 5:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}