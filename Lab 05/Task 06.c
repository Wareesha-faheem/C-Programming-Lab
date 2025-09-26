#include <stdio.h>

int main(void){
	int x,y,z,max;
	printf("Enter 1st, 2nd & 3rd number: \n");
	scanf("%d %d %d",&x,&y,&z);
	
	max = (x>y)?((x>z)?x:z):y;
	printf("The Maximum number is: %d", max);
	return 0;
}
