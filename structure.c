#include <stdio.h>

// Step 1: Define the struct
struct student {
    int roll;
    char name[20];
    float marks;
    char grade[8];
    char section[20];
    char address[50];
    char department[20];
};

// Step 2: Function to get details
void getStudentDetails(struct student *s) {
    printf("Enter roll number: ");
    scanf("%d", &s->roll);

    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    printf("Enter grade: ");
    scanf("%s", s->grade);

    printf("Enter section: ");
    scanf("%s", s->section);

    printf("Enter address: ");
    scanf("%s", s->address);

    printf("Enter department: ");
    scanf("%s", s->department);
}

// Step 3: Function to display details
void displayStudentDetails(struct student s) {
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
    printf("Grade: %s\n", s.grade);
    printf("Section: %s\n", s.section);
    printf("Address: %s\n", s.address);
    printf("Department: %s\n", s.department);
}

// Step 4: Main function
int main() {
    struct student s;

    getStudentDetails(&s);
    displayStudentDetails(s);

    return 0;
}
