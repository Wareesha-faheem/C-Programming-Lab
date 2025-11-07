#include <stdio.h>
void displaymatrix(int arr[2][3]){
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}
	int calcsum(int arr[2][3]){
		int sum=0;
		for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			sum+=arr[i][j];
		}
		}
		return sum;
	}
	float calcavg(int arr[2][3]){
		int sum=0,avg=0;
		for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			sum+=arr[i][j];
		}
		}
		avg=sum/6;
		return avg;
	}
	int max(int arr[2][3]){
		int max=arr[0][0];
		for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j]>max){
			max=arr[i][j];
		}
		}
		}
		return max;
	}
	int main(){
		int arr[2][3]={{1,2,3},{4,5,6}};
		
		displaymatrix(arr);
		printf("Sum: %d\n", calcsum(arr));
		printf("Avg: %.1f\n", calcavg(arr));
		printf("Max: %d\n", max(arr));
		return 0;
}
