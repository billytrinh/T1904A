#include <stdio.h>

int main(){
	int ptt1[50];// 0 -> 49

	ptt1[31] = 25;

	ptt1[0] = 2;

	for (int i = 0; i < 50; ++i)
	{
		printf("Nhap pt thu chi so %d:\n",i);
		scanf("%d",&ptt1[i]);
	}
 
	return 0;
}