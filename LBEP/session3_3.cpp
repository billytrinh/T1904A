#include <stdio.h>

int main(){
	double lai = 0,T = 1;
	int n=0;

	// while(T<=16){
	// 	lai = T*8/100;
	// 	T = T+lai;
	// 	n= n+1;
	// }

	do{
		lai = T*8/100;
		T = T+lai;
		n= n+1;
	}while(T<=16);

	printf("Can gui %d nam de duoc so tien %lf\n",n,T);

	return 0;
}