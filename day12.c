#include <stdio.h>

int main(void){
	//switch : alternative for multiple if else ,efficeint with fixed int
	//can be used for matching case of char
	int dayOfWeek = 0;
	printf("Enter a day of the week (1 - 7) : ");
	scanf(" %d" , &dayOfWeek);

	switch(dayOfWeek){
		case 1:
			printf("Kyo wa Monday desu~");
			break;
		case 2:
			printf("Kyo wa Tuesday desu~");
			break;
		case 3:
			printf("Kyo wa Wednesday desu~");
			break;
		case 4:
			printf("Kyo wa Thursday desu~");
			break;
		case 5:
			printf("Kyo wa Friday desu~");
			break;
		case 6:
			printf("Kyo wa Saturday desu~");
			break;
		case 7:
			printf("Kyo wa Sunday desu~");
			break;
		default :
			printf("Please only enter a number (1-7)");

			
	}

	return 0;
}
