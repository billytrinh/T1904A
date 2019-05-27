#include <stdio.h>
int b;
int tinh_tong(int x, int y){
	int c = x + y - 1;
	return c;
}

void xin_chao(){
	printf("Xin chao\n");
	printf("Hello\n");
}

int tim_so_lon_nhat_trong_3_so(int a, int b, int c){
	//int max;
	if(a > b && b > c){
		return a;
	}else if(b > a && b > c){
		return b;
	}else{
		return  c;
	}
}

void trao_doi(int *p1,int *p2){
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;	
}

void nhap_mang(int arr[],int n){
	for (int i = 0; i < n; ++i)
	{
		printf("Nhap so cho mang:\n");
		scanf("%d",&arr[i])
	}
}

void nhap_mang2(int *arr,int n){
	for (int i = 0; i < n; ++i)
	{
		printf("Nhap so cho mang:\n");
		scanf("%d",arr+i)
	}
}

void nhap_them(int *arr,int start,int end){
	for (int i = start; i <= end; ++i)
	{
		printf("Nhap so cho mang:\n");
		scanf("%d",arr+i)
	}
} 
int main(){
	int arr[5];
	nhap_mang(arr,5);

	int *p;
	p = (int *)malloc(5*sizeof(int)); 
	//nhap_mang2(p,5);
	nhap_them(p,0,,4);
	p = (int *)realloc(p,8*sizeof(int));
	//nhap_mang2(p,8);
	nhap_them(p,5,7)

	int a = tinh_tong(4,6);
	int z = tinh_tong(5,7);
	b = a+1;
	xin_chao();
	int x = 1203, y = 20222;
	
	trao_doi(&x,&y);
	printf("x = %d\n",x );
	printf("y = %d\n",y );


	int max = tim_so_lon_nhat_trong_3_so(5,22,77);

	



	return 0;
}