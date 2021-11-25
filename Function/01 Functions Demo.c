#include<stdio.h>
#include<conio.h>

void Addition()
{
	int Num1=0,Num2=0,Sum=0;
	
	printf("\n================****************================\n");
	
	printf("\n Entrr two numbers for Addition =");
	scanf("%d%d",&Num1,&Num2);
	
	Sum=Num1+Num2;
	
	printf("\n================****************================\n");
	
	printf("\n Addition is = %d",Sum);
	
	printf("\n================********$$$$$$$********================\n");
	
}

int main()
{
	int i=0;
	
	for(i=0;i<5;i++)
	{
		Addition();
	}
	
	getch();
	return 0;
}