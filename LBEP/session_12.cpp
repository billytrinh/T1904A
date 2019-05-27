#include <stdio.h>

int main(){

	FILE *fp;
	char s[255];
   fp = fopen("vidu.txt", "a+");
   fprintf(fp, "Vi du kiem tra ham fprintf ...\n");
   fputs("Vi du kiem tra ham fputs ...\n", fp);
   fgets(s,255,fp);
   printf("%s\n",s );
   fclose(fp);
}