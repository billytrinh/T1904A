#include <stdio.h>
#include <string.h>

int main(){
	char s1[10],s2[10];

	printf("Nhap chuoi s1:\n");
	scanf("%s",s1);
	printf("Nhap chuoi s2:\n");
	scanf("%s",s2);

	strcat(s1,s2); //<--> s1 = s1+s2;

	printf("%d\n",strcmp(s1,s2));

	printf("s1 = %s\n",s1);
	printf("s2 = %s\n",s2);

	char h = 'g';
	printf("vi tri: %ld\n",(strchr(s1,h) - s1));

	char s3[10];

	strcpy(s3,s1);// <--> s3 = s1;

	printf("s3 = %s\n",s3);

	printf("do dai s3 la %ld\n",strlen(s3));

	return 0;
}