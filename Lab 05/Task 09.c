#include <stdio.h>

int main(void){
	int a,b;
	printf("Enter 2 numbers: \n");
	scanf("%d %d",&a,&b);
	
	printf("Output of %d & %d is: %d\n",a,b,a&b);
	printf("Output of %d | %d is: %d\n",a,b,a|b);
	printf("Output of %d ^ %d is: %d\n",a,b,a^b);
	printf("Output of ~%d is: %d\n",a,~a);
	printf("Output of %d<<1 is: %d\n",a,a<<1);
	printf("Output of %d>>1 is: %d",b,b>>1);
	return 0;
}
