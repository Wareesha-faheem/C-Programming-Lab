#include <stdio.h>
int main() {
	int a[10][10];
	int n, i, j;
	int mainSum = 0, secondarySum = 0;
	printf("Enter the order of the square matrix (n x n): ");
	scanf("%d", &n);
	printf("Enter the elements of the matrix:\n");
	for(i = 0; i < n; i++) {
	for(j = 0; j < n; j++) {
	scanf("%d", &a[i][j]);
	}
	}
	for(i = 0; i < n; i++) {
	mainSum += a[i][i];
	secondarySum += a[i][n - 1 - i];
	}
	if(n % 2 == 1)
	secondarySum -= a[n/2][n/2];
	printf("Sum of main diagonal = %d\n", mainSum);
	printf("Sum of secondary diagonal = %d\n", secondarySum);
	printf("Total sum of both diagonals = %d\n", mainSum + secondarySum);
	return 0;
}
