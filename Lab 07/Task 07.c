#include <stdio.h>

int main(void){
	int id[10],target,j=0;
	for(int i=0;i<10;i++){
		printf("Enter Product %d ID: ", i+1);
		scanf("%d", &id[i]);
		
		if(id[i]<100||id[i]>1000){
			printf("\nEnter 3 digit Valid Product ID AGAIN!\n");
			printf("Enter Product %d ID: ", i+1);
			scanf("%d", &id[i]);
		}
	}
	
	printf("Enter the product ID you wish to remove from the List: ");
	scanf("%d", &target);
	
	for(int i=0;i<10;i++){
		if(id[i]!=target){
			id[j]=id[i];
			j++;
		}
	}
	
    printf("Array after removing %d:\n", target);
    for (int i = 0; i < j; i++) {
        printf("%d ", id[i]);
    }

	return 0;
}
