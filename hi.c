#include <stdio.h>

int main() {
    int marks[5]; // Array to store marks of 5 students
    int i;

    // Input marks for 5 students
    printf("Enter the marks of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Display the marks of 5 students
    printf("\nMarks of 5 students are:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}