#include <iostream>
#include <algorithm>
#include <cstring>
#define Student_number 5
#define Teacher_number 7
using namespace std;
long long i,j;
//写的标题 
char headline[10000]={"学号-------姓名---性别-学院--班级----分数----2-----3------4------5------6------7-----号码\n"};
//屏幕显示的标题 
char output_headline[1000]={"学号------名字-性别-学院----班级---平均分--号码 "};
//读的标题 
char show_headline1[10000]={"学号-------姓名---性别-学院--班级----分数----2-----3------4------5------6------7-----号码---平均分\n"};
//{"学号-------姓名------性别--学院---班级-------分数2--3--4--5--6--7-号码\n"};
char headline1[10000];
//学生结构体 （写） 
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

//自己给写学生数据 
	Students student[Student_number]=
	{
	
//------学号-------姓名------性别--学院---班级-------分数2--3--4--5--6--7-号码 
//		{"2018110","邱健军","男","机械", "机械工程",72,72,72,72,72,72,72,1008611},
//		{"2018111","二胖", "女" ,"医学院","护理学"  ,88,88,88,88,88,88,88,1008612},
//		{"2018112","教授", "男" ,"计算机","飞机学"  ,99,99,99,99,99,99,99,1008613},
//		{"2018113","蜗牛", "人妖", "鬼知道","你猜啊" ,11,11,11,11,11,11,11,1008614},
//		{"2018114","阳建波","男","计科院","软件工程" ,22,22,22,22,22,22,22,1008615}
		{"2018110","邱健军","男","机械", "机械工程",1008611},
		{"2018111","二胖", "女" ,"医学院","护理学"  ,1008612},
		{"2018112","教授", "男" ,"计算机","飞机学"  ,1008613},
		{"2018113","蜗牛", "人妖", "鬼知道","你猜啊" ,1008614},
		{"2018114","阳建波","男","计科院","软件工程" ,1008615}
			
		  
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
 
