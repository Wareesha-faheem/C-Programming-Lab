#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;
    int sum = 0;

    printf("Enter how many terms: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms:\n", n);

    for(i = 1; i <= n; i++) {
        if(i == 1) {
            next = first;
        }
        else if(i == 2) {
            next = second;
        }
        else {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%d ", next);
        sum = sum + next;
    }

    printf("\nSum of the series = %d\n", sum);

    return 0;
}

