#include <stdio.h>

int main(void) {
    int n, i, j, isPrime;
    int count = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i); 
            count++;          
            sum += i;        
        }
    }

    printf("\nTotal prime numbers up to %d = %d\n", n, count);
    printf("Sum of all prime numbers up to %d = %d\n", n, sum);

    return 0;
}

