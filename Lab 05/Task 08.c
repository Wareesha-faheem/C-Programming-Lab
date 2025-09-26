#include <stdio.h>

int main(void){
	int a,b;
	printf("Enter 2 numbers: \n");
	scanf("%d %d",&a,&b);
	
	printf("\n0 = False, 1 = True\n\n");
	printf("Output of %d == %d is: %d\n",a,b,a==b);
	printf("Output of %d > %d is: %d\n",a,b,a>b);
	printf("Output of %d < %d is: %d\n",a,b,a<b);
	printf("Output of %d != %d is: %d\n",a,b,a!=b);
	printf("Output of %d >= %d is: %d\n",a,b,a==b);
	printf("Output of %d <= %d is: %d",a,b,a==b);
	return 0;
}
