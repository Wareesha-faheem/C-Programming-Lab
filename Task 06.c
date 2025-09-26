#include <stdio.h>
int main(void){
	int num1,num2;
	char operation;
	printf("Enter both numbers:\n");
	scanf("%d %d",&num1,&num2);
	printf("Enter the operation to perform (+, -, *, /) : ");
	scanf(" %c", &operation);
	switch (operation){
	case '+':
	printf("The sum is %d", num1 + num2);
	break;
	case '-':
	printf("The difference is %d", num1 - num2);
	break;
	case '*':
	printf("The product is %d", num1 * num2);
	break;
	case '/':
	printf("The result of division is %d", num1/num2);
	break;
	}
	return 0;
}
