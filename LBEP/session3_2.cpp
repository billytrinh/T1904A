#include <stdio.h>

int main(){
	double S = 1000000000;
	double lai=0;
	int i = 1;
	while(i<=10){
		lai = S*8/100;
		S = S+lai;
		i= i+1;
	}

	printf("So tien cuoi cung nhan duoc: %lf\n",S);

	return 0;
}