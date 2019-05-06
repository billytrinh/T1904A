#include <stdio.h>

int main(){
	int n;
	printf("Nhap 1 so tu ban phim:\n");
	scanf("%d",&n);

	int S =0;
	for (int i = 1; i < n; ++i)
	{
		if(n%i==0){
			S +=i; // <=> S = S+i;
		}
	}
	if(S==n){
		printf("%d la so hoan hao\n",n);
	}else{
		printf("%d khong phai so hoan hao\n",n);
	}

	return 0;
}