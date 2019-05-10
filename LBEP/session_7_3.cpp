#include <stdio.h>

int main(){
	int m,n;

	do{
		printf("Nhap m=\n");
		scanf("%d",&m);		
	}while(m<=0);

	do{
		printf("Nhap n=\n");
		scanf("%d",&n);		
	}while(n<=0);

	int A[m][n],B[n][m];

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("A[%d][%d]\n", i,j);
			scanf("%d",&A[i][j]);
		}
	}

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			B[j][i] = A[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			printf("%3d",B[i][j] );
		}
		printf("\n");
	}

	return 0;
}