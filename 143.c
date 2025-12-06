//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n = 3;   // you can change this if needed
    struct Student s[n];

    // Input
    for (int i = 0; i < n; i++) {
        printf("Enter details of student %d:\n", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    // Find topper
    int topperIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topperIndex].marks)
            topperIndex = i;
    }

    // Output
    printf("Topper: %s (Marks: %.0f)\n", s[topperIndex].name, s[topperIndex].marks);

    return 0;
}
