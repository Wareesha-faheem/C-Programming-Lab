#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;
    int even = 0, odd = 0, positive = 0, negative = 0, zeros = 0;

    printf("Enter elements of a 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element %d of row %d: ", j + 1, i + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            int num = matrix[i][j];

            if(num % 2 == 0)
                even++;
            else
                odd++;

            if(num > 0)
                positive++;
            else if(num < 0)
                negative++;
            else
                zeros++;
        }
    }

    printf("\nMatrix Entered:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Matrix Analysis ---\n");
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeros: %d\n", zeros);

    return 0;
}

