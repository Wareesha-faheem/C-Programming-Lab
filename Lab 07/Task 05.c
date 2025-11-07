#include <stdio.h>

int main() {
    int grades[10];
    float sum = 0,average;
    int highest, lowest,highestIndex = 0, lowestIndex = 0;

    printf("Enter grades of 10 students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    printf("\nGrades of all students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i + 1, grades[i]);
        sum += grades[i];
    }

    average = sum / 10;
    printf("\nAverage grade of the class: %.2f\n", average);

    highest = grades[0];
    lowest = grades[0];

    for (int i = 1; i < 10; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
            highestIndex = i;
        }
        if (grades[i] < lowest) {
            lowest = grades[i];
            lowestIndex = i;
        }
    }

    printf("\nHighest grade: %d (Index %d)\n", highest, highestIndex);
    printf("Lowest grade: %d (Index %d)\n", lowest, lowestIndex);

    printf("\nEnter new grade for student with lowest score (Student %d): ", lowestIndex + 1);
    scanf("%d", &grades[lowestIndex]);

    printf("\nUpdated grades of the class:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i + 1, grades[i]);
    }

    return 0;
}
