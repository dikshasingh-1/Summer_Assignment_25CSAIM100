#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[100];
    int n = 0, choice, id, i, found;

    while (1) {
        printf("\n1.Add Employee\n2.Display Employees\n3.Search Employee\n4.Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter ID: ");
                scanf("%d", &e[n].id);
                printf("Enter Name: ");
                scanf(" %[^\n]", e[n].name);
                printf("Enter Salary: ");
                scanf("%f", &e[n].salary);
                n++;
                break;

            case 2:
                for (i = 0; i < n; i++) {
                    printf("\nID:%d\nName:%s\nSalary:%.2f\n",
                           e[i].id, e[i].name, e[i].salary);
                }
                break;

            case 3:
                printf("Enter Employee ID: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (e[i].id == id) {
                        printf("\nID:%d\nName:%s\nSalary:%.2f\n",
                               e[i].id, e[i].name, e[i].salary);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Employee Not Found\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}