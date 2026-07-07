#include <stdio.h>

struct Book {
    int id;
    char name[50];
    char author[50];
};

int main() {
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", b.name);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b.author);

    printf("\nLibrary Record\n");
    printf("Book ID: %d\n", b.id);
    printf("Book Name: %s\n", b.name);
    printf("Author: %s\n", b.author);

    return 0;
}