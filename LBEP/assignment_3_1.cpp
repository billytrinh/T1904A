#include <stdio.h>

int main(){
	int i=1,S=0,count=0;
	while(count<100){
		S=S+i;
		i+=2;
		count++;
	}
	printf("Tong 100 so le dau tien: %d\n",S);
	return 0;
}
