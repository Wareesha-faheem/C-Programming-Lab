#include <stdio.h>
int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int multiply(int a,int b){
	return a*b;
}
float divide(int a,int b){
	return a/b;
}
int main(){
	int choice,a,b;
	
	printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
	printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\nSelect your choice: ");
	scanf("%d", &choice);
	
	int (*operation)(int, int) = NULL;
	
	switch(choice) {
        case 1:
            operation = add;
            break;
        case 2:
            operation = sub;
            break;
        case 3:
            operation = multiply;
            break;
        case 4:
            operation = divide;
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    int result = operation(a, b);
    printf("Result: %d\n", result);

	return 0;
}
