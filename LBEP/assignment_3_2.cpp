#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);

	for (int i=1; i <= n; ++i)
	{
		if(n%i==0){
			printf("%d la 1 uoc so cua %d \n",i,n);
		}
	}

	return 0;
}