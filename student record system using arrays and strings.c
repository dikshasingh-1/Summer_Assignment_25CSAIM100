#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n = 0, choice, i, roll, found;

    while (1) {
        printf("\n1.Add Student\n2.Display Students\n3.Search Student\n4.Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Roll: ");
                scanf("%d", &s[n].roll);
                printf("Enter Name: ");
                scanf(" %[^\n]", s[n].name);
                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);
                n++;
                break;

            case 2:
                for (i = 0; i < n; i++) {
                    printf("\nRoll: %d\nName: %s\nMarks: %.2f\n",
                           s[i].roll, s[i].name, s[i].marks);
                }
                break;

            case 3:
                printf("Enter Roll to Search: ");
                scanf("%d", &roll);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (s[i].roll == roll) {
                        printf("\nRoll: %d\nName: %s\nMarks: %.2f\n",
                               s[i].roll, s[i].name, s[i].marks);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Student Not Found\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}