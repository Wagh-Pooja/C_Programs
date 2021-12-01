#include<stdio.h>
#include<conio.h>

int main()
{
	int iNo=21,iNum=55;
	int *iptr1=&iNo;
	int *iptr2=&iNo;
	
	printf("\n Value of iNo=%d",iNo);
	printf("\n Address of iNo=%d",&iNo);
	printf("\n Value of iNo Using its Pointer iptr1=%d",*iptr1);
	printf("\n Address of iNo Using iptr1=%d",iptr1);
	printf("\n Address of iptr1=%d",&iptr1);
	
	printf("\n\n Value of iNum=%d",iNum);
	printf("\n Address of iNum=%d",&iNum);
	printf("\n Value of Variable Using its Pointer iptr2=%d",*iptr2);
	printf("\n Address of Variable Using iptr2=%d",iptr2);
	printf("\n Address of iptr2=%d",&iptr2);
	
	getch();
	return 0;
}