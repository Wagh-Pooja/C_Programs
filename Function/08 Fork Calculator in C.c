#include<stdio.h>
#include<conio.h>

int Add(int,int);
int Sub(int,int);
int Mult(int,int);
int Div(int,int);
int Mid(int,int);

int main()
{
	int Num1=0,Num2=0;
	
	printf("\n Enter 2 Numbers=");
	scanf("%d%d",&Num1,&Num2);
	
	printf("\nResult after Arithmetic Operations on given Numbers = \n");
	
	printf("\n Addition       =%d+%d=%d",Num1,Num2,Add(Num1,Num2));
	
	printf("\n Subtraction    =%d-%d=%d",Num1,Num2,Sub(Num1,Num2));
	
	printf("\n Multiplication =%d*%d=%d",Num1,Num2,Mult(Num1,Num2));
	
	printf("\n Division       =%d/%d=%d",Num1,Num2,Div(Num1,Num2));
	
	printf("\n Modulo         =%d%%%d=%d",Num1,Num2,Mod(Num1,Num2));
	
	getch();
	
	return 0;
}

int Add(int N1,int N2)
{
	int Res=0;
	Res=N1+N2;
	return Res;
}

int Sub(int N1,int N2)
{
	int Res=0;
	Res=N1-N2;
	return Res;
}

int Mult(int N1,int N2)
{
	int Res=0;
	Res=N1*N2;
	return Res;
}

int Div(int N1,int N2)
{
	int Res=0;
	Res=N1/N2;
	return Res;
}

int Mod(int N1,int N2)
{
	int Res=0;
	Res=N1%N2;
	return Res;
}