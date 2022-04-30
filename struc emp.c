#include <stdio.h>

struct Employee
{
    int id, age, salary, phoneno;
    char name[30], department[30];
};

int main()
{
    struct Employee e;

    printf("Enter the id of the Employee: ");
    scanf("%d", &e.id);

    printf("Enter the age of the Employee: ");
    scanf("%d", &e.age);

    printf("Enter the name of the Employee: ");
    getchar();
    fgets(e.name, 30, stdin);

    printf("Enter the phone number of the Employee: ");
    scanf(e.phoneno);

    printf("Enter the department of the Employee: ");
    fgets(e.department, 30, stdin);

    printf("Enter the salary of the Employee: ");
    scanf("%d", &e.salary);

    printf("\nEmployee Details:\n");
    printf("Employee Id: %d\n", e.id);
    printf("Employee Name: %s", e.name);
    printf("Employee age: %d\n", e.age);
    printf("Employee phone: %s", e.phoneno);
    printf("Employee department: %s", e.department);
    printf("Employee salary: %d\n", e.salary);

    return 0;
}