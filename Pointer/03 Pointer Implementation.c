#include<stdio.h>
#include<conio.h>

int main()
{
	int iNo=21;
	int *iptr1=&iNo;
	int *iptr2=&iNo;
	
	printf("\n Value of iNo Using its Pointer iptr1=%d",*iptr1);
	printf("\n Address of iNo Using iptr1=%d",iptr1);
	printf("\n Address of iptr1=%d",&iptr1);
	

	printf("\n Value of Variable Using its Pointer iptr2=%d",*iptr2);
	printf("\n Address of Variable Using iptr2=%d",iptr2);
	printf("\n Address of iptr2=%d",&iptr2);
	
	getch();
	
	iNo=55;
	
	printf("\n New Value of iNo Using its Pointer iptr1=%d",*iptr1);
	printf("\n New Value of Variable Using its Pointer iptr2=%d",*iptr2);
	
	getch();
	
	*iptr1=101;
	
	printf("\n New Value of iNo=%d",iNo);
	printf("\n Value of iNo Using its Pointer iptr1=%d",*iptr1);
	printf("\n Value of Variable Using its Pointer iptr2=%d",*iptr2);
	
	getch();
	return 0;
}