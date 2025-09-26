#include <stdio.h>

int main(void){
	int x,y,z,max;
	printf("Enter 1st, 2nd & 3rd number: \n");
	scanf("%d %d %d",&x,&y,&z);
	
	if(x>y){
		if(x>z){
			printf("%d is the largest number!",x);
		}
		else{
			printf("%d is the largest number!",z);
		}
	}
	else{
		printf("%d is the largest number!",y);
	}
	return 0;
}
