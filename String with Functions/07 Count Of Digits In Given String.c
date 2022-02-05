#include<stdio.h>
#include<conio.h>

int  Digit_Count(char *);

int main()
{
	char cSrc[20]={'\0'};
	int D_Cnt=0;
	
	printf("\n Enter a String=");
	gets(cSrc);
	
	D_Cnt= Digit_Count(cSrc);
	
	printf("\n Count Of Digits In Given String Is =%d",D_Cnt);
	
	getch();
	return 0;
}

int Digit_Count(char *str)
{
	int i=0, Cnt=0;
	
	while(str[i]!='\0')
	{
		if(str[i]>='0' && str[i]<='9')
		{
			Cnt++;
		}
		i++;
	}
	return Cnt;
}