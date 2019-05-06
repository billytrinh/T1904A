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
		// kiem tra mang[i] co phai SNT
		int x = 0;
		for (int j = 1; i <= mang[i]; ++i)
		{
			if(mang[i] % j == 0){
				x++;
			}
		}
		if(x==2){
			printf("So nguyen to: %d\n",mang[i]);
		}

		// end
	}


	return 0;
}