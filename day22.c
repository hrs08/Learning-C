#include <stdio.h>

int main(void){
	//nested loops now
	for(int i =1; i<=10; i++){
		for(int j = 1; j<=10; j++){
			printf("%3d " , j*i);
		}
		printf("\n");
	}

	int rows = 0;
	int c = 0;
	char sym = '\0';

	printf("Enter # of rows : ");
	scanf("%d" , &rows);

	printf("Enter # of columns : ");
	scanf("%d" , &c);

	printf("Enter a symbol : ");
	scanf(" %c" , &sym);



	for(int i = 0; i<rows; i++){
		for(int i=0; i< c; i++){
		printf("%c" , sym);
		}
		printf("\n ");
	}
	
	
	
	return 0;
}
