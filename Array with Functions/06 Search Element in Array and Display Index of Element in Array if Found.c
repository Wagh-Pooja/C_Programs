#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

void Accept_Element(int[]);
void Display_Element(int[]);
int Search_Element(int[],int);

int main()
{
	int Num[Size]={},Src_Ele=0,Index=-1;
	
	Accept_Element(Num);
	
	system("cls");
	
	Display_Element(Num);
	
	getch();
	
	printf("\n Enter Element to be Searched in Array =");
	scanf("%d",&Src_Ele);
	
	Index=Search_Element(Num, Src_Ele);
	
	if(-1==Index)
	{
		printf("\n Number %d Not Present In Given Array",Src_Ele);
	}
	else
	{
		printf("\n Number %d Found at Index %d in Given Array",Src_Ele,Index);
	}
	
	getch();
	return 0;
}

int Search_Element(int Arr[],int Ele)
{
	int i=0;
	
	for(i=0;i<Size;i++)
	{
		if(Ele==Arr[i])
		{
			break;
		}
	}
	
	if(Size==i)
	{
		i=-1;
	}
	
	return i;
}

void Accept_Element(int Arr[])
{
	int i=0;
	
	for(i=0;i<Size;i++)
	{
		printf("\n Enter Value Of Element Number %d=",i+101);
		scanf("%d",&Arr[i]);
	}
	return;
}

void Display_Element(int Fun[])
{
	int i=0;
	for(i=0;i<Size;i++)
	{
		printf("\n Value Of Element %d = %d",i+1,Fun[i]);
	}
	return;
}