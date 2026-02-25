#include <stdio.h>

struct Student {
    char studentName[50];
    char rollNo[20];      
    float totalMarks;
};

void readStudent(struct Student *s) {
    printf("Enter Student Name: ");
    scanf(" %[^\n]", s->studentName);   

    printf("Enter Roll Number: ");
    scanf("%s", s->rollNo);

    printf("Enter Total Marks: ");
    scanf("%f", &s->totalMarks);
}

void displayStudent(struct Student s) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.studentName);
    printf("Roll No: %s\n", s.rollNo);
    printf("Total Marks: %.2f\n", s.totalMarks);
}

int main() {
    struct Student s;

    readStudent(&s);
    displayStudent(s);

    return 0;
}