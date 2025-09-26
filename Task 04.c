#include <stdio.h>
int main(void){
	int score;
	printf("Enter your score: \n");
	scanf("%d", &score);
	if (score>=90){
	printf("Grade A");
	}
	else if (score>=80){
	printf("Grade B");
	}
	else if (score>=70){
	printf("Grade C");
	}
	else if (score>=60){
	printf("Grade D");
	}
	else{
	printf("Fail");
	}
	return 0;
}
