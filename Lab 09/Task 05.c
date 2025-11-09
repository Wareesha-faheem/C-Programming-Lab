#include <stdio.h>
void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int x=1,y=2;
	int *a;
	a=&x;
	int *b;
	b=&y;
	
	printf("The Values are: %d, %d\n", *a,*b);
	swap(a,b);
	printf("The Swapped Values are: %d, %d\n",*a,*b);
	
	return 0;
}
