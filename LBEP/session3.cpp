#include <stdio.h>

int main(){
	int S=0,i=1;
	while(i<=10000){
		S= S+i;
		i=i+1;
	}
	printf("S= %d\n",S);
	return 0;
}