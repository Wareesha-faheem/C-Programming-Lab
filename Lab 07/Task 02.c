#include <stdio.h>
int main(void){
	int sum_even=0,sum_odd=0;
	int num[10]={};
	for(int i=0;i<10;i++){
	printf("\nEnter %d number: (Odd/Even)\t",i+1);
	scanf("%d", &num[i]);
	if(num>=0){
	if(num[i]%2==0){
	sum_even+=num[i];
	}
	else{
	sum_odd+=num[i];
	}
	}
	else{
	printf("Enter valid odd/even number");
	}
	}
	printf("The sum of odd numbers are: %d\n", sum_odd);
	printf("The sum of even numbers are: %d\n", sum_even);
	return 0;
}
