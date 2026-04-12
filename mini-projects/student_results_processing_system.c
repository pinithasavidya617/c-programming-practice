#include <stdio.h>

int main() {
    int studentID;
    int m1, m2, m3;
    int attendance;

    int total;
    float average;
    float attendancePercentage;

    char grade;
    int finalMarks;

    printf("Enter Student ID: ");
    scanf("%d", &studentID);

    printf("Enter marks for 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    printf("Enter attendance out of 15 weeks: ");
    scanf("%d", &attendance);

    total = m1 + m2 + m3;

    average = (float) total / 3;

    attendancePercentage = (float) attendance / 15 * 100;

    if (average >= 75)
        grade = 'A';
    else if (average >= 60)
        grade = 'B';
    else if (average >= 50)
        grade = 'C';
    else
        grade = 'F';

    if (attendancePercentage >= 80)
        finalMarks = total + 5;
    else
        finalMarks = total;

    printf("\n--- Student Report ---\n");
    printf("Student ID: %d\n", studentID);
    printf("Total Marks: %d\n", total);
    printf("Average: %.2f\n", average);
    printf("Attendance: %.2f%%\n", attendancePercentage);
    printf("Final Marks: %d\n", finalMarks);
    printf("Grade: %c\n", grade);

    return 0;
}
