#include<stdio.h>
#include<conio.h>

int main()
{
	int No=15;
	int *iptr=&No;
	
	printf("\n Address of No=%d",&No);
	printf("\n Address of iptr=%d",&iptr);
	printf("\n Value in iptr=%d",iptr);
	printf("\n Value in No=%d",No);
	printf("\n Value in No by Pointer=%d",*iptr);
	
	printf("\n Address of vptr=%d",&vptr);
	printf("\n Value in vptr=%d",vptr);
	printf("\n Value of No by Void Pointer=%d",*vptr);
	
	getch();
	return 0;
}