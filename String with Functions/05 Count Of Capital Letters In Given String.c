#include<stdio.h>
#include<conio.h>

int  Cap_Count(char *);

int main()
{
	char cSrc[20]={'\0'};
	int Cap_Cnt=0;
	
	printf("\n Enter a String=");
	gets(cSrc);
	
	Cap_Cnt= Cap_Count(cSrc);
	
	printf("\n Count Of Capital Letters In Given String Is =%d",Cap_Cnt);
	
	getch();
	return 0;
}

int Cap_Count(char *str)
{
	int i=0, Cnt=0;
	
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			Cnt++;
		}
		i++;
	}
	return Cnt;
}