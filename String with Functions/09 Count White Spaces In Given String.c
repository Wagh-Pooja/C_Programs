#include<stdio.h>
#include<conio.h>

int  WS_Count(char *);

int main()
{
	char cSrc[20]={'\0'};
	int WS_Cnt=0;
	
	printf("\n Enter a String=");
	gets(cSrc);
	
	WS_Cnt= WS_Count(cSrc);
	
	printf("\n Count Of White Spaces In Given String Is =%d",WS_Cnt);
	
	getch();
	return 0;
}

int WS_Count(char *str)
{
	int i=0, Cnt=0;
	
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			Cnt++;
		}
		i++;
	}
	return Cnt;
}