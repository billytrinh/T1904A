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

	int MTA[m][n],MTB[m][n];
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("Nhap MTA[%d][%d] = \n",i,j );
			scanf("%d",&MTA[i][j]);
		}
	}

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("Nhap MTB[%d][%d] = \n",i,j );
			scanf("%d",&MTB[i][j]);
		}
	}

	int MTC[m][n],MTD[m][n];
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			MTC[i][j] = MTA[i][j]+ MTB[i][j];
			MTD[i][j] = MTA[i][j]- MTB[i][j];
		}
	}
	printf("Ma tran tong: \n");
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%5d",MTC[i][j] );	
		}
		printf("\n");
	}

	printf("Ma tran hieu: \n");
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%5d",MTD[i][j] );	
		}
		printf("\n");
	}


	return 0;
}