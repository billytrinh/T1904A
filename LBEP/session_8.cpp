#include <stdio.h>

int main(){
	int x = 10;

	int *p;

	p = &x;

	//x = x+1;

	*p = *p + 1;

	int arr[5] = {5,4,3,2,1};

	printf("arr[0] =  %d\n", arr[0]);
	printf("arr[0] = %d\n",*arr );
	printf("arr[3] = %d\n",*(arr+3) );

	for (int i = 0; i < 5; ++i)
	{
		printf("Nhap phan tu\n");
		scanf("%d",arr+i);// scanf("%d",&arr[i])
	}

	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n",arr[i]);
		printf("%d\n",*(arr+i));
	}


	return 0;
}