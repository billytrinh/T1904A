#include <stdio.h>
#include <stdlib.h>

int main(){
	int *arr;
	//arr = (int *)malloc(5*sizeof(int));
	arr = (int *)calloc(5,sizeof(int));
	for (int i = 0; i < 5; ++i)
	{
		printf("Nhap 1 so:\n");
		scanf("%d",arr+i);
	}

	int max = *arr;
	for (int i = 0; i < 5; ++i)
	{
		if(*(arr+i)> max){
			max = *(arr+i);
		}
	}

	arr = (int *)realloc(arr,12*sizeof(int));
	
	free(arr);
	//.....
	
	return 0;
}