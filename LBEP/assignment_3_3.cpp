#include <stdio.h>

int main(){
	int n,x=0;

	printf("Nhap n=\n");
	scanf("%d",&n);

	for (int i = 1; i <= n; ++i)
	{
		if(n%i==0){
			x++;
		}
	}

	if(x==2){
		printf("%d la so nguyen to\n",n);
	}else{
		printf("%d khong phai so nguyen to\n", n);
	}

	return 0;
}