#include <stdio.h>

int main(void){
	//break and continue
	for(int i=1; i <= 10; i++ ){


		if(i==8){
			break;
		}
		else if(i==3){
			continue;
		}

		printf("%d\n" , i);
	}
	return 0;
}
