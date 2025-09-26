#include <stdio.h>

int main(void){
	int a,b;
	printf("Enter 2 numbers: \n");
	scanf("%d %d",&a,&b);
	
	printf("The sum is: %d\n", a+b);
	printf("The difference is: %d\n", a-b);
	printf("The product is: %d\n", a*b);
	printf("The division is: %d\n", a/b);
	printf("The remainder is: %d", a%b);
	
	return 0;
}
