#include<stdio.h>
#include<conio.h>

int main()
{
	int Num[5]={10,20,30,40,50};
	int *ptr=Num;
	
	printf("\n Base Address Of Array Is=%d",Num);
	printf("\n Value Of Pointer Is=%d",ptr);
	printf("\n Value Of Array Element Where Pointer Pointing=%d",*ptr);
	
	getch();
	
	ptr=ptr / 5;
	
	printf("\n\n New Value In Pointer Is =%d",ptr);
	printf("\n\n Value Of Array Element Where Pointer Pointing =%d",*ptr);
	
	getch();
	return 0;
}