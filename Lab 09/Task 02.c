#include <stdio.h>
int main(){
	int n=5;
	int arr[n];
	for(int i=0;i<n;i++){
	printf("Enter %d value: ", i+1);
	scanf("%d", &arr[i]);
	printf("\n");
	}
	int *ptr=arr;
	for(int i=0;i<n;i++){
	printf("Value at %d index is %d\t Address: %d\n",i,*(ptr+i),ptr+i);
	}
return 0;
}
