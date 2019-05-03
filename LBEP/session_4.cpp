#include <stdio.h>

int main(){
	int x = 1;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			printf("%d  ",x);
			x++;
		}
		printf("\n");
	}

	for (int i = 1; i <=9; ++i)
	{
		printf("%d  ",i);
		if(i%3==0){
			printf("\n");	
		}
	}

	return 0;
}