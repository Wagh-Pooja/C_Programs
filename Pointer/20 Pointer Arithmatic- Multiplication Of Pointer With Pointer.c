#include<stdio.h>
#include<conio.h>

int main()
{
	int No1=21, No2=50;
	int *Res=NULL;
	int *ptr1=&No1;
	int *ptr2=&No2;
	
	printf("\n Base Address Of Variable 1st Is=%d",&No1);
	printf("\n Base Address Of Variable 2nd  Is=%d",&No2);
	
	printf("\n Value Of Pointer1 Is=%d",ptr1);
	printf("\n Value Of Pointer2 Is=%d",ptr2);
	
	printf("\n Value Of Variable To Which  Pointer Pointing=%d",*ptr1);
	printf("\n Value Of Variable To Which  Pointer Pointing=%d",*ptr2);
	
	getch();
	
	Res= ptr2 * ptr1;
	
	printf("\n\n Value Result Is =%d",Res);
	
	getch();
	return 0;
}