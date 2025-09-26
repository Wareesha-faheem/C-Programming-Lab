#include <stdio.h>

int main(void){
	int course_num;
	char grade;
	printf("Enter your course number (1-3) : \n");
	scanf("%d",&course_num);
	
	printf("Enter your grade: \n");
	scanf(" %c", &grade);
			
	switch(course_num){
		case 1:
		case 2:
		case 3:
			switch(grade){
				case 'A': printf("Excellent Performance!"); break;
				case 'B': printf("Good Performance, can be improved!"); break;
				case 'C': printf("Needs Improvement!"); break;
				case 'D': printf("Need to Work really hard!"); break;
				case 'F': printf("Focus on your studies!"); break;
				default: printf("Invalid Grade");
			}
			break;
		default: printf("Invalid course number");
	}
	return 0;
}
