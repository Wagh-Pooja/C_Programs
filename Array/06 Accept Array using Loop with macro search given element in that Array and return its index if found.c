#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

int main()
{
	int Arr[Size]={};
	int i=0;
	int Src_Ele=0;
	
	printf("\n Enter Array Elements=\n\n");
	
	for(i=0;i<Size;i++)
	{
		printf("\n Enter Element[%d]=",i+101);
		scanf("%d",&Arr[i]);
	}
	
	for(i=0;i<Size;i++)
	{
		printf("\n Value of Element %d=%d",i+501,Arr[i]);
	}
	
	printf("\n Press Any Key To Continue...");
	getch();
	
	system("cls");
	
	printf("\n Enter Element to Search in Array=");
	scanf("%d",&Src_Ele);
	
	for(i=0;i<Size;i++)
	{
		if(Arr[i]==Src_Ele)
		{
			break;
		}
	}
	
	if(i<Size)
	{
		printf("\n\n First Occurance of Given Number %d found at Index %d in Givrn Array!!!",Src_Ele,i);
	}
	else
	{
		printf("\n\n Given Number %d Not found in Given Array",Src_Ele);
	}
	
	printf("\n\n Thanks!!");
	
	getch();
	return 0;
}