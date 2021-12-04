#include<stdio.h>
#include<conio.h>

void Swap_Two_Numbers(int * , int *);

int main()
{
	int Num1=0,Num2=0;
	
	printf("\n Enter Two Numbers For Swapping =");
	scanf("%d%d",&Num1,&Num2);
	
	printf("\n Before Swap 1st Number = %d",Num1);
	printf("\n Before Swap 2nd Number = %d",Num2);
	
	Swap_Two_Numbers(&Num1,&Num2);
	
	printf("\n\n After Swap Value In 1st Number =%d",Num1);
	printf("\n\n After Swap Value In 2nd Number =%d" ,Num2);
	
	printf("\n\n Thanks..");
	getch();
	return 0;
}

void Swap_Two_Numbers(int *ip1, int *ip2)
{
	int Tmp=0;
	Tmp=*ip1;
	*ip1=*ip2;
	*ip2=Tmp;
	return;
}