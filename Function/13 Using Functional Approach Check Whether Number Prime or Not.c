#include<stdio.h>
#include<conio.h>

int Is_Prime(int);

int main()
{
	int Num=0,Ret=0;
	
	printf("\n Enter an Integer Number =");
	scanf("%d",&Num);
	
	Ret = Is_Prime(Num);
	
	if(Ret==-1)
	{
		printf("\n Given Number %d is Neutral",Num);
	}
	else if(Ret==1)
	{
		printf("\n Given Number %d is Prime Number",Num);
	}
	else
	{
		printf("\n Given Number %d is Not Prime Number",Num);
	}
	
	printf("\n Thanks !!!");
	
	getch();
	return 0;
}

int Is_Prime(int Num)
{
	int i=0, Flag=-2;
	
	if(Num==0 || Num==1)
	{
		Flag = -1;
		goto DWN;
	}
	
	for(i=2;i<Num;i++)
	{
		if(Num%i==0)
		{
			break;
		}
	}
	
	if(Num==i)
	{
		Flag=1;
	}
	else
	{
		Flag=2;
	}
	
	DWN:
	 return Flag;
}