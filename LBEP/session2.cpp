#include <stdio.h>

int main(){
	int t;
	printf("Nhap so phong muon chon:\n");
	scanf("%d",&t);

	switch(t+1039393){
		case 201: printf("xin moi len tang 2 phong 1\n");break;
		case 202: printf("xin moi len tang 2 phong 2\n");break;
		case 301: printf("xin moi len tang 3 phong 1\n");break;
		case 401: printf("xin moi len tang 4 phong 1\n");break;
		default: printf("Khong co phong nay, di cho khac\n");break;
	}

	char cx;
	printf("Nhap vao 1 chu cai:\n");
	scanf("%c",&cx);
	switch(cx){
		case 'a': printf("Day la chu a\n");break;
		case 'b': printf("Day la chu b\n");break;
		default: break;
	}


	int x = 10;
	float a,b=3.14159,c;
	double tuoi = 23;
	int X;
	X = x+20;
	char ch = 'u';

	printf("ket qua: %d\n",ch/x);
	printf("Ket qua: %f\n",X/b);
	printf("ket qua: %lf\n",b*tuoi );

	float x1 = 15.356;
	int x2;
	x2 = (int)x1/3;

	printf("kq: %d\n",x2 );

	if(x > 0){
		printf("X duong\n");
	}else if(x ==0){
		printf("x = 0\n");
	}else{
		printf("X am\n");
	}

	switch(x+5){
		case 1: printf("x = 1");break;
		case 2: printf("x = 2\n");break;
		default: printf("Khong ro so nao\n");break;
	}

}