#include <stdio.h>

int main(void){

	//width
	int num1 = 1;
	int num2 = 10;
	int num3 = 100;

	printf("%03d \n" , num1);
	printf("%03d \n" , num2);
	printf("%04d \n" , num3);

	//precision
	float price1 = 19.99;
	float price2 = 3.14159;
	float price3 = -100.932;
	
	printf("%+7.2f \n", price1);
	printf("%+7.5f \n", price2);
	printf("%+7f \n", price3);

	//Basic Arithmetics :)
	int x = 10;
	int y = 3;
	int z = 0;

	z = x+y;
	//z=x-y;
	//z = x*y;
	//z = x/y; //this will give 0 right now!!
	//z=x % y; // to check even odd num
	printf("%d \n" , z);

	x++;
	x+=2;
	//same for multiply or div
	printf("%d \n" , x);
	
	return 0;
}
