#include <stdio.h>
#include <unistd.h> //for linux / mac

int main(void){
	//for loop (initialize; condition; update)
	for(int i = 10; i>=0; i--){
		sleep(1);
		printf("%d\n" , i);
	}
	printf("Happy new.... year?? , what happened to you....\n");
	sleep(1);
	printf("<scream>\n\n");
	sleep(2);
	printf("Somebody call an ambulance !!");
	
	return 0;
}
