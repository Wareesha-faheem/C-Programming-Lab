#include <stdio.h>
int main(void){
	int color;
	printf("Enter Color: (1 for Red, 2 for Yellow, 3 for Green): ");
	scanf("%d", &color);
	switch (color){
	case 1:
	printf("Stop");
	break;
	case 2:
	printf("Ready");
	break;
	case 3:
	printf("Go");
	break;
	}
}
