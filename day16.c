#include <stdio.h>
#include <string.h>

//here name is parameter
void hbd(char name[]){
	printf("Happy birthday to you\n");
	printf("Happy birthday to you\n");
	printf("Happy birthday to dear %s\n" , name);
	printf("Happy birthday to you\n\n");
}

int main(void){
	//function : reuseable code
	char name[50] = "";
	printf("Enter your name : ");
	fgets(name , sizeof(name) , stdin);
	name[strlen(name)-1] = '\0';

	hbd(name);
	hbd(name);      //here name is argument
	hbd(name);

	return 0;
}
