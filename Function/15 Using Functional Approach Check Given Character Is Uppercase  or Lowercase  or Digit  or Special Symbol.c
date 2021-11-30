#include<stdio.h>
#include<conio.h>

void Check_Char(char);

int main()
{
	char InCh='\0';
	
	printf("\n Enter a Character To Check Whether, \n(It is Uppercase or Lowercase or Digit or Special Symbol)=");
	
	InCh=getche();
	
	Check_Char(InCh);
	
	printf("\n\n Thanks");
	
	getch();
	return 0;
}

void Check_Char(char ch)
{
	if((ch>='A') && (ch<='Z'))
	{
		printf("\n\n Given Character Is Uppercase Letter");
	}
	else if((ch>='a') && (ch<='z'))
	{
		printf("\n\n Given Character Is Lowercase Letter");
	}
	else if((ch>='0') && (ch<='9'))
	{
		printf("\n\n Given Character Is Digit");
	}
	else
	{
		printf("\n\n Gicen Character Is Special Symbol");
	}
	return;
}