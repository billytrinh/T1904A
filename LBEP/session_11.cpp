#include <stdio.h>
#include <string.h>
struct classroom{
	char classname[20];
	int room;
}

struct sinhvien
{
	char name[50];
	int mark;
	struct classroom classsv;
} sv1,sv2;

int main(){
	int x[5];

	printf("Nhap ten sv 1:\n");
	scanf("%s",sv1.name);

	printf("Nhap diem sv 1:\n");
	scanf("%d",&sv1.mark);

	printf("Thong tin:\n");
	printf("Name: %s\n",sv1.name );
	printf("Mark: %d\n",sv1.mark );

	scanf("%s",sv1.classsv.classname);
	// strcpy(sv2.name,sv1.name);
	// sv2.mark = sv1.mark;

	memcpy(&sv2,&sv1,sizeof(struct sinhvien));
	//sv2 =  sv1;

	printf("Sinh vien 2: \n");
	printf("name: %s mark: %d\n",sv2.name,sv2.mark );
	
	struct sinhvien sv3;

	struct sinhvien t1904a[20];
	for (int i = 0; i < 20; ++i)
	{
		scanf("%s",t1904a[i].name);
	}
	//scanf("%s",sv3.name);

	return 0;
}