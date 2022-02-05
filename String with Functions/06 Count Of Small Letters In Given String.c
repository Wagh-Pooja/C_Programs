#include<stdio.h>
#include<conio.h>

int  Sm_Count(char *);

int main()
{
	char cSrc[20]={'\0'};
	int Sm_Cnt=0;
	
	printf("\n Enter a String=");
	gets(cSrc);
	
	Sm_Cnt= Sm_Count(cSrc);
	
	printf("\n Count Of Small Letters In Given String Is =%d",Sm_Cnt);
	
	getch();
	return 0;
}

int Sm_Count(char *str)
{
	int i=0, Cnt=0;
	
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
		{
			Cnt++;
		}
		i++;
	}
	return Cnt;
}