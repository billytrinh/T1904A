#include <stdio.h>

int main(){
	int a;
	printf("Nhap so a tu ban phim:\n");
	scanf("%d",&a);

	int b;
	printf("Nhap so b tu ban phim:\n");
	scanf("%d",&b);
	int c;
	if(a > b){
		if(b==0){
			printf("Khong the chia cho 0\n");	
		}else{
			c = a/b;
			printf("ket qua: %d\n",c);
		}
	}else{
		c = a*b;
		printf("Ket qua: %d\n",c);
	}
}