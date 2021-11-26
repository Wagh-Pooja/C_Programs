#include<stdio.h>
#include<conio.h>

int Add(int,int);

int main()
{
	int No1=0,No2=0,Res=0;
	
	printf("\n Enter 2 Numbers for Addition=");
	scanf("%d%d",&No1,&No2);
	
	Res = Add(No1,No2);
	
	printf("\n Addition of %d & %d is = %d",No1,No2,Res);
	
	getch();
	return 0;
}

int Add(int N1,int N2)
{
	int Sum=0;
	
	Sum=N1+N2;
	
	return Sum;
}