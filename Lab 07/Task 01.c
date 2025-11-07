#include <stdio.h>
int main(){
	int sum;
	int num[10]={2,3,4,5,6,7,8,9,1,5};
	int temp=num[0];
	printf("The Original Array is:\t");
	
	for(int j=0;j<10;j++){
	printf("%d,",num[j]);
	}
	
	for(int i=0;i<=4;i++){
	temp=num[i];
	num[i]=num[9-i];
	num[9-i]=temp;
	}
	
	printf("\nThe Reversed Array is: ");
	
	for(int j=0;j<10;j++){
	printf("%d,",num[j]);
	sum+=num[j];
	}
	
	printf("\nThe sum of all numbers in array is %d", sum);
	return 0;
}
