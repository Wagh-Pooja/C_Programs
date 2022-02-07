#include<stdio.h>
#include<conio.h>

int  Sp_Count(char *);

int main()
{
	char cSrc[20]={'\0'};
	int Sp_Cnt=0;
	
	printf("\n Enter a String=");
	gets(cSrc);
	
	Sp_Cnt= Sp_Count(cSrc);
	
	printf("\n Count Of Special Symbols In Given String Is =%d",Sp_Cnt);
	
	getch();
	return 0;
}

int Sp_Count(char *str)
{
	int i=0, Cnt=0;
	
	while(str[i]!='\0')
	{
		if(!((str[i]>='0' && str[i]<='9') || (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')))
		{
			Cnt++;
		}
		i++;
	}
	return Cnt;
}