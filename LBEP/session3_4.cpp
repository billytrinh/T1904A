#include <stdio.h>

int main(){
	int n;
	/*
	printf("Nhap n=\n");
	scanf("%d",&n);

	while(n %2 != 0){
		printf("Nhap n= \n");
		scanf("%d",&n);
	}
	*/
	// dong nay ko thuc thi

	// do{
	// 	printf("Nhap n=\n");
	// 	scanf("%d",&n);
	// }while(n%2 != 0);

	printf("Nhap n=\n");
	scanf("%d",&n);

	for (int i = 0;n%2!= 0; i++)
	{
		printf("Nhap n=\n");
		scanf("%d",&n);
	}

	for (int i = 0; i <= 100; ++i)
	{
		printf("i = %d\n",i );
	}

	for(int z = 0;z<10;z++){

	}

	printf("So vua nhap: %d\n",n);

	return 0;
}