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
		printf("Nhap so:\n");
		scanf("%d",&arr[i]);
	}

	int timkiem = 5;
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		if(timkiem == arr[i]){
			//printf("Co so %d trong mang\n",timkiem );
			//break;
			printf("Xuat hien tai vi tri %d\n",i );
			count++;
		}
	}
	if(count>0){
		printf("%d xuat hien %d lan\n",timkiem,count );
	}else{
		printf("Khong xuat hien so trong mang\n");
	}

	return 0;
}