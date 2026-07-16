#include <stdio.h>

int sq(int num){
	return num * num;
}
int cube(int num){
	return num*num*num;
}

int main(void){
	//retun a value back to where u call a function
	int x = sq(2);
	int y = sq(3);
	int z = sq(4);
	int a = cube(2)

	printf("%d\n" ,x);
	printf("%d\n" ,y);
	printf("%d\n" ,z);
	printf("%d\n" ,a);

	//Variable scope theory , CAN SHARE THE NAME IF IN DIFFERENT SCOPE {}//
	
	
	return 0;
}
