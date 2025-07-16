#include<stdio.h>



struct record {
    int id;
    char name[50];
    float salary;
}; int main() {
    struct record emp1;
    emp1.id = 101;
    strcpy(emp1.name, "John Doe");
    emp1.salary = 50000.50;

    printf("Employee ID: %d\n", emp1.id);
    printf("Employee Name: %s\n", emp1.name);
    printf("Employee Salary: %.2f\n", emp1.salary);
    struct record *r = &emp1;
    printf("Pointer to Employee ID: %d\n", r->id);
    printf("Pointer to Employee Name: %s\n", r->name);
    printf("Pointer to Employee Salary: %.2f\n", r->salary);
    printf("Size of struct record: %zu bytes\n", sizeof(struct record));
    
    return 0;
}












