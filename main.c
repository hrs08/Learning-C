#include <stdio.h>
#include <stdbool.h>
//So i am learning from BroCode , because i liked it

// int main(){} is required to run the program , maybe like using def in python but always 
int main(void){

	printf("I like pizza! \n"); //end all lines with ;
	printf("It was really good \n");
	//variable is the reusable container for a value
	int saal = 25;
	int year = 2026;
	int quant = 2;

	float gpa = 2.3;
	double pi = 3.14159265358979;
	// float save 6 , double saved 15 digit

	char Grade = 'A';
	
	printf("am i %d years old ? \n" , saal);
	printf("the year is %d , or is it ?? \n" , year);
	printf("YOu have ordered %d x items \n" , quant);
	printf("Sadly your gpa is %.1f \n" , gpa);
	printf("Yeah i've memorised value of pi , it is %.15lf \n" , pi);
	printf("gg gang , u got %c grade on the test \n" , Grade);

	//so in c , strings doesn't exist so we do this :
	char name[] = "Coding";
	char food[] = "smth";
	printf("Hello %s\n" , name);
	printf("%s \n" , food);

	bool IsOnline = true;
	printf("Are you online %d \n" , IsOnline);
	return 0; //non 0 value = error
}


	
