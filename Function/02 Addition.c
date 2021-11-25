#include<stdio.h>
#include<conio.h>

void Add();

int main()
{
	Add();
	getch();
	return 0;
}

void Add()
{
	int No1=0,No2=0,Sum=0;
	
	printf("\n Enter 2 Numbers for Addition=");
	scanf("%d%d",&No1,&No2);
	
	Sum=No1+No2;
	
	printf("\n Addition of %d & %d = %d",No1,No2,Sum);
	
	return;
}