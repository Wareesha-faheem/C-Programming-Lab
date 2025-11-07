#include <stdio.h>
int main() {
	int a[10][10], transpose[10][10];
	int i, j, n;
	int isSymmetric = 1;
	printf("Enter the order of the matrix (n x n): ");
	scanf("%d", &n);
	printf("Enter the elements of the matrix:\n");
	for(i = 0; i < n; i++) {
	for(j = 0; j < n; j++) {
	scanf("%d", &a[i][j]);
	}
	}
	for(i = 0; i < n; i++) {
	for(j = 0; j < n; j++) {
	transpose[j][i] = a[i][j];
	}
	}
	for(i = 0; i < n; i++) {
	for(j = 0; j < n; j++) {
	if(a[i][j] != transpose[i][j]) {
	isSymmetric = 0;
	break;
	}
	}
	}
	if(isSymmetric)
	printf("The matrix is symmetric.\n");
	else
	printf("The matrix is not symmetric.\n");
	return 0;
}
