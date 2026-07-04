#include <stdio.h>
#include <string.h>

int main(void){

	int age = 0;
	float gpa = 0.0f ;
	char grade = '\0';
	char name[30] = ""; 

	printf("Enter your age : ");
	scanf("%d" ,&age);

	printf("Enter your gpa : ");
	scanf(" %f" ,&gpa);

	printf("Enter your grade : ");
	scanf(" %c" ,&grade);
	
	getchar();
	printf("Enter your name : ");
	fgets(name , sizeof(name) , stdin);
	name[strlen(name) -1] = '\0'	
	
	printf("%d \n" , age);
	printf("%f \n" , gpa);
	printf("%c \n" , grade);
	printf("%s \n" , name);
	
	return 0;
}
