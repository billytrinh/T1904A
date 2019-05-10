#include <stdio.h>

int main(){
	int arr[10];
	for (int i = 0; i < 10; ++i)
	{
		printf("Nhap 1 so: \n");
		scanf("%d",&arr[i]);
	}

	int max = arr[0];
	int min = arr[0];
	int vi_tri_max = 0;
	int vi_tri_min = 0;
	for (int i = 0; i < 10; ++i)
	{
		if(arr[i] > max){
			max = arr[i];
			vi_tri_max = i;
		}
		if(arr[i] < min){
			min = arr[i];
			vi_tri_min = i;
		}
	}

	printf("So lon nhat: %d o vi tri: %d\n",max,vi_tri_max );
	printf("So nho nhat: %d o vi tri: %d\n",min,vi_tri_min );
	int G_max = arr[0];
	for(int i=0;i<10;i++){
		if(G_max == max){
			G_max = arr[i];
		}
		if(arr[i]> G_max && arr[i] < max){
			G_max = arr[i];
		}
	}

	printf("So gan lon nhat: %d\n",G_max );

	return 0;
}