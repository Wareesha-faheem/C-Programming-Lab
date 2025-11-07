#include <stdio.h>

int main() {
    int n,coef;
    printf("Enter number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    printf("\nPascal's Triangle:\n");
    for(int i = 0; i < n; i++) {
        for(int space = i; space < n - 1; space++) {
            printf(" ");
        }
        coef = 1;
        for(int j = 0; j <= i; j++) {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}

