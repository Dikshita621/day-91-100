//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function to find and return the topper
struct Student findTopper(struct Student s[], int n) {
    int topIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks)
            topIndex = i;
    }
    return s[topIndex]; // return structure
}

int main() {
    int n = 3;
    struct Student s[3];

    // Taking input
    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    // Get topper
    struct Student topper = findTopper(s, n);

    // Print topper
    printf("Top Student: %s | Roll: %d | Marks: %.0f\n",
           topper.name, topper.roll, topper.marks);

    return 0;
}
