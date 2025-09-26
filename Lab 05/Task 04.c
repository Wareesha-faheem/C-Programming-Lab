#include <stdio.h> 

int main(void){ 
	int a,b; 
	printf("Enter 1st Number: "); 
	scanf("%d",&a); 
	
	printf("Enter 2nd Number: "); 
	scanf("%d",&b); 
	
	(a>b)?printf("%d is greater than %d", a, b):printf("%d is greater than %d", b, a); 
	return 0; 
} 
