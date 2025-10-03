#include <stdio.h>

int main(void){
	int num, even_count=0, odd_count=0;
	char ch;
	do{
		printf("Enter a number: \n");
		scanf("%d", &num);
		
		if(num%2==0){
			even_count++;
			printf("%d is an even number\n", num);
		}
		else{
			odd_count++;
			printf("%d is an odd number\n", num);
		}
		
		printf("Do you want to continue? (Y=Yes , N=No)\t");
		scanf(" %c", &ch);
	}while(ch=='Y');
	
	printf("Total Even Numbers = %d\n", even_count);
	printf("Total Odd Numbers = %d\n", odd_count);
	return 0;
}
