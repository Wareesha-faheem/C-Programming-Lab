#include <stdio.h> 

int main(void){ 
	int x,y; 
	printf("Enter 1st Number: "); 
	scanf("%d",&x); 
	printf("Enter 2nd Number: "); 
	scanf("%d",&y); 
	
	printf("%d \n", x>5 && y<10); 
	printf("%d \n", x==10 || y==5); 
	printf("%d \n", !(x==y)); 
	
	return 0; 
} 
