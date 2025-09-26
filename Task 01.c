#include <stdio.h>
int main(){
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	if (age>=18){
	printf("You're eligble for voting");
	}
	else{
	printf("You're not eligble for voting");
	}
}
