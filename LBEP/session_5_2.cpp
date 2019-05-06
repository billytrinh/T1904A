#include <stdio.h>

int main(){
	int mang[10];

	for (int i = 0; i < 10; ++i)
	{
		printf("Nhap so thu %d\n",i);
		scanf("%d",&mang[i]);
	}

	for (int i = 0; i < 10; ++i)
	{
		if(mang[i] %2 !=0){
			printf("%d\n",mang[i]);
		}
		
	}

	return 0;
}