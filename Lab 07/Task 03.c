#include <stdio.h>
#include <string.h>
int main(void){
	int count, len;
	char my_str[10]={};
	char target;
	printf("Enter a string: ");
	scanf("%s", &my_str);
	printf("Enter the character you want to search: ");
	scanf(" %c", &target);
	for(int i=0;i<10;i++){
	if(my_str[i]==target){
	count++;
	}
	}
	if(count==0){
	printf("Character not present!\n");
	}
	printf("Total count of %c is %d", target, count);
	return 0;
}
