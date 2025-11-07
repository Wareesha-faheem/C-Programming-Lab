#include <stdio.h>
int sq(int num);
int main(){
	int x,num;
	printf("Enter a number: ");
	scanf("%d",&x);
	printf("The Square of %d is %d", x,sq(x));
	return 0;
}
	
int sq(int a){
	return a*a;
}
