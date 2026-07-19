#include <stdio.h>
#include <string.h>

int main(void){
	//while loop in c
	char name[50] = "";

	printf("Enter your name : ");
	fgets(name , sizeof(name) , stdin);
	name[strlen(name) - 1] = '\0';

	while(strlen(name) == 0){
		printf("Name cannot be empty !! Please enter your name : ");
		fgets(name , sizeof(name) , stdin);
		name[strlen(name) - 1] = '\0';
	}
	printf("Hello %s" , name);

	//there is also like a do while loop , didn't wrote the code for that tho..

	return 0;
}
