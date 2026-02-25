#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, average;
    char grade;

    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5;

    if (average >= 90)
        grade = 'A';   // Ex
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else
        grade = 'F';

    printf("Total Marks = %.2f\n", total);
    printf("Average = %.2f\n", average);
    printf("Grade = %c\n", grade);

    return 0;
}