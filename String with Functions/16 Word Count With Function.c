#include<stdio.h>
#include<conio.h>

int Word_Count(char *);

int main()
{
	char str[20]={'\0'};
	int WCnt=0;
	
	printf("\n Enter a String=");
	gets(str);
	
	WCnt= Word_Count(str);
	
	printf("\n Word In Given String Is =%d",WCnt);
	
	getch();
	return 0;
}

int Word_Count(char *src)
{
	int i=0, Cnt=0;
	
	while(src[i]!='\0')
	{
		if(src[i]==' ' || src[i]=='.' || src[i]==',' || src[i]=='\t')
		{
			i++;
			continue;
		}
		Cnt++;
		
		while(src[i]!=' ' && src[i]!=',' && src[i]!='.' && src[i]!='\t')
		{
			i++;
		}
	}
	return Cnt;
}