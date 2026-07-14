#include <stdio.h>
#include <stdbool.h>

int main(void){
	//logical operator in c
	int temp = 0;

	if(temp >0 && temp < 30){
		printf("The temp is good ");
	}
	else if(temp <= 0 || temp >= 30){
		printf("Thep is bad");
	}
	else{
		printf("idgaf");
	}

	bool isSunny = true;

	if (!isSunny){
		printf("It is cloudy outside");
	}
	else{
		printf("It is sunny outside");
	}

	

	
	return 0;
}
