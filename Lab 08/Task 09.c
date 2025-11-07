#include <stdio.h>

int main() {
    int matrix[3][3], transpose[3][3], rotated[3][3];
    int i, j;
    int isSame = 1; 

    printf("Enter elements of a 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element %d of row %d: ", j + 1, i + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    for(i = 0; i < 3; i++) {
        rotated[i][0] = transpose[i][2];
        rotated[i][1] = transpose[i][1];
        rotated[i][2] = transpose[i][0];
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(matrix[i][j] != rotated[i][j]) {
                isSame = 0;
                break;
            }
        }
    }

    printf("\nOriginal Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix after 90-degree clockwise rotation:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", rotated[i][j]);
        }
        printf("\n");
    }

    if(isSame)
        printf("\nThe rotated matrix is the SAME as the original.\n");
    else
        printf("\nThe rotated matrix is DIFFERENT from the original.\n");

    return 0;
}

