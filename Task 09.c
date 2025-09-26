#include <stdio.h>
int main(void){
	int day_num;
	printf("Enter the day number of week (between 1-7): ");
	scanf("%d", &day_num);
	if (day_num>0 && day_num<8){
	switch (day_num){
	case 1:
	printf("Monday");
	break;
	case 2:
	printf("Tuesday");
	break;
	case 3:
	printf("Wednesday");
	break;
	case 4:
	printf("Thursday");
	break;
	case 5:
	printf("Friday");
	break;
	case 6:
	printf("Saturday");
	break;
	case 7:
	printf("Sunday");
	break;
	}
	}
	else{
	printf("Invalid Day number");
	}
	return 0;
}
