#include <stdio.h>

int main(){
	int x=1,y=2,z=3;

	for (int i = 0; i < 97; ++i)
	{
		x = y; // số thứ nhất lấy giá trị của số thứ 2
		y = z; // số thứ 2 lấy giá trị của số thứ 3;
		z = x+y; // số thứ 3 lấy số tiếp theo trên trục số
	}

	printf("so thu 10 la %d\n",z);

	return 0;
}