#include <stdio.h>
int main(void){
	int row,column;
	printf("Enter no. of rows in array: ");
	scanf("%d", &row);
	for(int i=0;i<row;i++){
	for(int k=1;k<row-i;k++){
	printf(" ");
	}
	for(int j=0;j<=i;j++){
	printf("%d", j+1);
	}
	printf("\n");
	}
	return 0;
}
