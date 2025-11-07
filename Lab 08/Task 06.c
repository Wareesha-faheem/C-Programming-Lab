#include <stdio.h>

int main() {
    int original[3][3], transpose[3][3];
    int i, j;

    printf("Enter elements of a 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element %d of row %d: ", j + 1, i + 1);
            scanf("%d", &original[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            transpose[j][i] = original[i][j];
        }
    }

    printf("\nOriginal Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", original[i][j]);
        }
        printf("\n");
    }

    printf("\nTransposed Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

