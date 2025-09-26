#include <stdio.h> 
#include <math.h>
 
int main(void){ 
	int num; 
	
	printf("Enter Number: "); 
	scanf("%d",&num); 
	
	printf("The square root of %d is %.1f: ", num,sqrt(num)); 
	return 0; 
} 
