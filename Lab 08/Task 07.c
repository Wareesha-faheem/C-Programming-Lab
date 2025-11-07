#include <stdio.h>

int main() {
    int n;
    printf("Enter size of matrices (2 for 2x2 or 3 for 3x3): ");
    scanf("%d", &n);

    int A[3][3], B[3][3], product[3][3];
    int i, j, k;

    printf("\nEnter elements of first matrix (A):\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("Enter element %d of row %d: ", j + 1, i + 1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of second matrix (B):\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("Enter element %d of row %d: ", j + 1, i + 1);
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            product[i][j] = 0;
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            for(k = 0; k < n; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nProduct of the two matrices:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}

