#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	int RollNo;
	char Name[20];
	char City[10];
	float Per;
} s1={70,"Harry Potter","America",78.6363};

int main()
{
	struct student std3={15,"Ajit Khade","Sangali",87.4637};
	
	printf("\n Local Student Object Details Given are = \n\n\t RollNo = %d \n\t Name = %s \n\t City = %s \n\t Percentage = %0.3f \n",std3.RollNo,std3.Name,std3.City,std3.Per);
	
	strcpy(s1.Name,"Spider Man");
	
	getch();
	
	printf("\n Global Student Object Details Given are = \n\n\t RollNo = %d \n\t Name = %s \n\t City = %s \n\t Percentage = %0.3f \n",s1.RollNo,s1.Name,s1.City,s1.Per);
	
	getch();
	return 0;
}