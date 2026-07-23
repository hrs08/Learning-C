#include <stdio.h>
#include <unistd.h> //for linux / mac... ok so this is for sleep if needed
#include <stdlib.h>
#include <time.h>// and this is for time!

int main(void){
	//some very basic pseudo random number
	srand(time(NULL));

	printf("%d" , rand());
	printf("\n");
	int rnum = (rand() % 2) + rand();
	printf("%d" , rnum);
	+
	int min  = 1;
	int max = 100;

	int rnum2 = (rand() % (max - min + 1)) + min;   //can remember as a formula if needed
	printf("%d" , rnum2);
	
	
	return 0;
}
