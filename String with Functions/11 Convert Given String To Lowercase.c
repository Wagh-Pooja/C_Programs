#include<stdio.h>
#include<conio.h>

void Convert_To_Lower(char *);

int main()
{
	char cSrc[20]={'\0'};
	
	printf("\n Enter a String=");
	gets(cSrc);
	
	Convert_To_Lower(cSrc);
	
	printf("\n Given String In Lowercase Is =%s",cSrc);
	
	getch();
	return 0;
}

void Convert_To_Lower(char *str)
{
	int i=0;
	
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
		i++;
	}
	return;
}