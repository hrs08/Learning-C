#include <stdio.h>
#include <string.h>

void hello(char name[] , int age);
int main(void){
	//fucntion prototype
	char name[50] = "";
	printf("Enter your name : ");
	fgets(name , sizeof(name) , stdin);
	name[strlen(name)-1] = '\0';
	hello(name , 28);
	
	return 0;
}

void hello(char name[] , int age){
	printf("Hello %s\n" , name);
	printf("Are you %d years old ?\n" , age);
}
