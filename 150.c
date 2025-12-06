//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;  // pointer to structure

    // Input using pointer
    printf("Enter Student Details (Name Roll Marks): ");
    scanf("%s %d %f", ptr->name, &ptr->roll, &ptr->marks);

    // Output using pointer
    printf("Modified Data: Name: %s | Roll: %d | Marks: %.0f\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
