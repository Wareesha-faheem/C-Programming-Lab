#include <stdio.h>

void calculate(int a, int b, int *sum, float *avg){
	*sum=a+b;
	*avg=(a+b)/2;
}

int main(){
	int *a;
	int *b;
	int x=3,y=5;
	
	a=&x;
	b=&y;
	int sum;
	float avg;
	
	calculate(x,y,&sum,&avg);
	
	printf("The Sum is: %d\n", sum);
	printf("The Average is: %.1f\n", avg);
	
	return 0;
}
