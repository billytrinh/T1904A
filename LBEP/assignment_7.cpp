#include <stdio.h>

int main(){
	int A[4][4];
	int max = 0,vi_tri=0;

	for (int i = 0; i < 4; ++i)
	{	
		for (int j = 0; j < 4; ++j)
		{
			printf("Nhap A[%d][%d]\n",i,j );
			scanf("%d",&A[i][j]);
		}
	}

	for (int i = 0; i < 4; ++i)
	{	
		int temp = 0;
		for (int j = 0; j < 4; ++j)
		{
			temp += A[i][j];
		}
		if(i==0){
			max = temp;
		}
		if(temp > max){
			max = temp;
			vi_tri = i;
		}
	}

	printf("Hang %d co gia tri lon nhat la: %d\n",vi_tri,max );

	return 0;
}