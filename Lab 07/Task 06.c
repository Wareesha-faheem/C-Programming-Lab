#include <stdio.h>

int main(void){
	int num[5],new_num[5];
	for(int i=0;i<5;i++){
		printf("Enter Number %d: ", i+1);
		scanf("%d", &num[i]);
		printf("\n");
	}
	
	for(int i=0;i<5;i++){
		new_num[i]=(num[i]+10-5)*2;
	}
	
	printf("Results of Calculations in array: ");
	for(int i=0;i<5;i++){
		printf("%d ", new_num[i]);
	}
	return 0;
}
