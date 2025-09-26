#include <stdio.h>
int main(void){
	int pass;
	int original_pass = 9177;
	printf("Enter your password: ");
	scanf("%d", &pass);
	if (pass==original_pass){
	printf("Access Granted!");
	}
	else{
	printf("Access Denied!");
	}
	return 0;
}
