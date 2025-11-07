#include <stdio.h>
int findmax(int arr[], int size){
	int max=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}
int main(){
	int size;
	int arr[size];
	printf("Enter the size of array: ");
	scanf("%d", &size);
	for(int i=0;i<size;i++){
		printf("Enter Value %d: ", i+1);
		scanf("%d", &arr[i]);
		printf("\n");
	}
	printf("Max: %d\n", findmax(arr, size));
	return 0;
}
