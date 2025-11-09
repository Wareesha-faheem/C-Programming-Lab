#include <stdio.h>

int main(){
	int a=10;
	float b=5.6;
	char c='W';
	
	void *p;
	p=&a;
	printf("The Integer is: %d\n", *(int *)p);
	p=&b;
	printf("The Float value is: %.1f\n", *(float *)p);
	p=&c;
	printf("The character is: %c", *(char *)p);
	return 0;
}
