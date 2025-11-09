#include <stdio.h>
float average(int a, int b, int c){
	return (a+b+c)/3.0;
}
int main(){
	int a,b,c;
	printf("Enter 3 values: ");
	scanf("%d %d %d", &a,&b,&c);
	
	printf("The Average of these numbers is: %.1f\n",average(a,b,c));
	return 0;
}
