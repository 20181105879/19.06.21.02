#include <iostream>
#include <algorithm>
#include <cstring>
#define Student_number 5
#define Teacher_number 7
using namespace std;
long long i,j;
//д�ı��� 
char headline[10000]={"ѧ��-------����---�Ա�-ѧԺ--�༶----����----2-----3------4------5------6------7-----����\n"};
//��Ļ��ʾ�ı��� 
char output_headline[1000]={"ѧ��------����-�Ա�-ѧԺ----�༶---ƽ����--���� "};
//���ı��� 
char show_headline1[10000]={"ѧ��-------����---�Ա�-ѧԺ--�༶----����----2-----3------4------5------6------7-----����---ƽ����\n"};
//{"ѧ��-------����------�Ա�--ѧԺ---�༶-------����2--3--4--5--6--7-����\n"};
char headline1[10000];
//ѧ���ṹ�� ��д�� 
struct Students{
	char id[15];
	char name[10];
	char sex[15];
	char college[15];
	char st_class[15];
	double sore[Teacher_number];
	long long phone;
	double avg;
	double sum;
	
}student[Student_number];



int main()
{

//�Լ���дѧ������ 
	Students student[Student_number]=
	{
	
//------ѧ��-------����------�Ա�--ѧԺ---�༶-------����2--3--4--5--6--7-���� 
//		{"2018110","�񽡾�","��","��е", "��е����",72,72,72,72,72,72,72,1008611},
//		{"2018111","����", "Ů" ,"ҽѧԺ","����ѧ"  ,88,88,88,88,88,88,88,1008612},
//		{"2018112","����", "��" ,"�����","�ɻ�ѧ"  ,99,99,99,99,99,99,99,1008613},
//		{"2018113","��ţ", "����", "��֪��","��°�" ,11,11,11,11,11,11,11,1008614},
//		{"2018114","������","��","�ƿ�Ժ","�������" ,22,22,22,22,22,22,22,1008615}
		{"2018110","�񽡾�","��","��е", "��е����",1008611},
		{"2018111","����", "Ů" ,"ҽѧԺ","����ѧ"  ,1008612},
		{"2018112","����", "��" ,"�����","�ɻ�ѧ"  ,1008613},
		{"2018113","��ţ", "����", "��֪��","��°�" ,1008614},
		{"2018114","������","��","�ƿ�Ժ","�������" ,1008615}
			
		  
	};
	FILE *p=NULL;
	p=fopen("student.txt","w");
		if(!p)
		{
			printf("open fail\n");
			return 0;
		}
	fprintf(p,"%s",headline);
		for( i=0;i<Student_number;i++)
		{
			fprintf(p,"%s  ",student[i].id);
			fprintf(p,"%s  ",student[i].name);
			fprintf(p,"%s    ",student[i].sex);
			fprintf(p,"%s  ",student[i].college);
			fprintf(p,"%s  ",student[i].st_class);
			fprintf(p,"%lld",student[i].phone);
			fprintf(p,"\n");
		}
	fclose(p);

	
	
	
	
return 0;
}
 
