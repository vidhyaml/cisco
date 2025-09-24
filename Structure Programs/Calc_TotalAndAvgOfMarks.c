#include <stdio.h>

// Structure to store marks of subjects
struct Subjects {
    float physics;
    float chemistry;
    float maths;
    float biology;
};

// Structure to store student details
struct Student {
    char name[50];
    int roll;
    struct Subjects sub; // Nested structure
    float total;
    float average;
};

int main() {
    struct Student s;

    // Input student details
    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    // Input marks for subjects
    printf("Enter Physics marks: ");
    scanf("%f", &s.sub.physics);
    printf("Enter Chemistry marks: ");
    scanf("%f", &s.sub.chemistry);
    printf("Enter Maths marks: ");
    scanf("%f", &s.sub.maths);
    printf("Enter Biology marks: ");
    scanf("%f", &s.sub.biology);

    // Calculate total and average
    s.total = s.sub.physics + s.sub.chemistry + s.sub.maths + s.sub.biology;
    s.average = s.total / 4.0;

    // Display details
    printf("\n--- Student Result ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll);
    printf("Physics: %.2f\n", s.sub.physics);
    printf("Chemistry: %.2f\n", s.sub.chemistry);
    printf("Maths: %.2f\n", s.sub.maths);
    printf("Biology: %.2f\n", s.sub.biology);
    printf("Total Marks: %.2f\n", s.total);
    printf("Average Marks: %.2f\n", s.average);

    return 0;
}
