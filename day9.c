#include <stdio.h>

int main(void)
{
	// if statements , the conditional ability
	int age = 0;
	printf("Enter your age : ");
	scanf("%d" , &age);
	//order of the if statemeent does matter !!
	if(age>=18){
		printf("You are an Adult , have fun");
	}
	
	else if(age<0){
		printf("You haven't been born yet !!");
	}

	else if(age==0){
			printf("You are a newborn...how !! ");
	}
	else{
		printf("You are not an Adult , still have fun");
	}

	return 0;
}
