#include <stdio.h>

int main(){
	int n;
	do{
		printf("Nhap n=\n");
		scanf("%d",&n);	
	}while(n<=0);
	
	int arr[n];

	for (int i = 0; i < n; ++i)
	{	
		bool flag = true;
		while(flag){
			int count = 0;
			printf("Nhap so %d\n",i);
			scanf("%d",&arr[i]);
			for (int j = 0; j < i; ++j)
			{
				if(arr[i] == arr[j]){
					count++;
					break;	
				}
			}
			if(count == 0){
				flag = false;
			}
		}
		
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n-i-1; ++j)
		{
			if(arr[j] < arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		printf("%d  ",arr[i] );
	}




	return 0;
}