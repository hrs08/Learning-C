#include <stdio.h>
#include <math.h>

int main(void)
{
	//compound interest calc..
	double principal = 0.0;
	double rate = 0.0;
	double total = 0.0;
	int year = 0;
	int timesCompounded = 0;

	printf("Starting the : Compound Interest Calculator \n");

	printf("Enter the principal (P) :  ");
	scanf("%lf" , &principal);

	printf("Enter the interest rate(r) in percent : ");
	scanf("%lf" , &rate);
	rate = rate / 100;

	printf("Enter the # of years [t] : ");
	scanf("%d" , &year);

	printf("Enter # of times compounded per year [n] : ");
	scanf("%d" , &timesCompounded);	

	total = principal * pow(1+ (rate/timesCompounded) , timesCompounded * year);
	printf("After %d years , the total will be $%.2lf" , year ,total);
	
	return 0;
}

