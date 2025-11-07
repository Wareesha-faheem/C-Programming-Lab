#include <stdio.h>

int main(void){
	int temp=0,med1=0,med2=0;
	int scores[10]={94,83,72,91,86,68,86,24,54,99};
	int n=sizeof(scores)/ sizeof(scores[0]);
	
	for (int i = 0; i <n; i++) {
        for (int j = 0; j < n - i-1; j++) {
            if (scores[j] > scores[j + 1]) {
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }
    
    printf("Sorted array: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", scores[i]);
       
    if(n%3==0){
    	printf("\nThe Median is: %d\n", scores[n/2]);
	}
	else{
		med1=scores[n/2-1];
		med2=scores[n/2];
		printf("\nThe Median is: %d\n", (med1+med2)/2);
	}
	return 0;
}
