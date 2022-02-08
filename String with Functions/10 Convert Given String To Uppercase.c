#include<stdio.h>
#include<conio.h>

void Convert_To_Upper(char *);

int main()
{
	char cSrc[20]={'\0'};
	
	printf("\n Enter a String=");
	gets(cSrc);
	
	Convert_To_Upper(cSrc);
	
	printf("\n Given String In Uppercase Is =%s",cSrc);
	
	getch();
	return 0;
}

void Convert_To_Upper(char *str)
{
	int i=0;
	
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
		i++;
	}
	return;
}