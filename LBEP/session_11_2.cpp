#include <stdio.h>
#include <stdlib.h>

typedef struct sinhvien
{
	char name[50];
	int age;
	int mark;
} sinhvienFPT;
typedef int intxxx;

int main(){
	int x =20;
	intxxx y =30;
	struct sinhvien *sv;
	struct sinhvien student[30];
	sinhvienFPT abc ;	
	//int *p;
	
	//p = (int *)malloc(5*sizeof(int));

	sv = (struct sinhvien *)malloc(3*sizeof(struct sinhvien));

	for (int i = 0; i < 3; ++i)
	{
		scanf("%s",(sv+i)->name);
		scanf("%d",&(sv+i)->age);
		scanf("%d",&(sv+i)->mark);
	}

	for (int i = 0; i < 3; ++i)
	{
		printf("Name: %s\n",(sv+i)->name );
		printf("Age: %d\n",(sv+i)->age );
		printf("Mark: %d\n",(sv+i)->mark);
	}


	return 0;
}