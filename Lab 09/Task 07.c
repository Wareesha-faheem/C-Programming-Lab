#include <stdio.h>

int main(){
	int *p;
	p=NULL;
	
	if(p==NULL){
		printf("The pointer does not reference any valid memory.\n");
	}
	else{
		printf("The pointer does references to a valid memory.\n");
	}
	return 0;
}
