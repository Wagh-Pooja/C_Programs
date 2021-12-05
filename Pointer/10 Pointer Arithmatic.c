#include<stdio.h>
#include<conio.h>

int main()
{
	int Num[5]={15,25,35,45,55};
	int *ptr=Num;
	printf("\n Base Address Of Array Is=%d",Num);
	printf("\n Value Of Pointer Is=%d",ptr);
	printf("\n Value Of Array Element Where Pointer Pointing=%d",*ptr);
	
	getch();
	return 0;
}