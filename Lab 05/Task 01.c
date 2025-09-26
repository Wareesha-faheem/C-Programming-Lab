#include <stdio.h> 

int main(void){ 
	int a,b, exp; 
	
	printf("Enter 1st Number: "); 
	scanf("%d",&a); 
	printf("Enter 2nd Number: "); 
	scanf("%d",&b); 
	
	exp = a+b * (a-b)/2; 
	
	printf("The 1st result of (a-b) is: %d \n", a-b); 
	printf("The 2nd result of b*(a-b) is %d \n", b*(a-b)); 
	printf("The 3rd result of b *(a-b)/2 is : %d \n", b*(a-b)/2); 
	printf("The 4th result (Overall Result) of a+b *(a-b)/2 is %d \n", exp); 
	return 0; 	
} 
