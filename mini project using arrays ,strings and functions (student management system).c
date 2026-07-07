#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int n = 0;

void addStudent() {
    printf("Enter Roll: ");
    scanf("%d", &s[n].roll);
    printf("Enter Name: ");
    scanf(" %[^\n]", s[n].name);
    printf("Enter Marks: ");
    scanf("%f", &s[n].marks);
    n++;
}

void displayStudents() {
    int i;
    for (i = 0; i < n; i++) {
        printf("\nRoll:%d\nName:%s\nMarks:%.2f\n",
               s[i].roll, s[i].name, s[i].marks);
    }
}

void searchStudent() {
    int roll, i;
    printf("Enter Roll: ");
    scanf("%d", &roll);

    for (i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            printf("\nRoll:%d\nName:%s\nMarks:%.2f\n",
                   s[i].roll, s[i].name, s[i].marks);
            return;
        }
    }
    printf("Student Not Found\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n1.Add\n2.Display\n3.Search\n4.Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid Choice\n");
        }
    }
}