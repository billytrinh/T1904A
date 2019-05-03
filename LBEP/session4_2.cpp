#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);//4
	for (int i = 1; i < n; ++i)
	{
		int x=0;
		for (int j = 1; j <= i; ++j)
		{
			if(i%j==0){
				x++;
			}
		}
		if(x==2){
			printf("%d la so nguyen to\n", i);
		}
	}

	return 0;
}