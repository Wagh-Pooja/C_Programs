#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
	int RollNo;
	char Name[20];
	char City[10];
	float Per;
};

int main()
{
	struct student std1,std2;
	
	std1.RollNo=65;
	strcpy(std1.Name,"Amey Wagh");
	strcpy(std1.City,"Pune");
	std1.Per=75.95647;
	
	printf("\n Enter Roll No =");
	scanf("%d",&std2.RollNo);
	
	printf("\n Enter Name =");
	scanf("%[^\n]",&std2.Name);
	fflush(stdin);
	
	printf("\n Enter City =");
	scanf("%[^\n]",&std2.City);
	fflush(stdin);
	
	printf("\n Enter Percentage =");
	scanf("%f",&std2.Per);
	
	printf("\n 1st Student Details Given are = \n\n\t RollNo = %d\n\t Name = %s \n\t City = %s \n\t Percentage = %f\n",std1.RollNo,std1.Name,std1.City,std1.Per);
	
	printf("\n 2nd Student Details Given are = \n\n\t RollNo =%d \n\t Name = %s \n\t City = %s \n\t Percentage = %f\n",std2.RollNo,std2.Name,std2.City,std2.Per);
	
	getch();
	return 0;
}