#include<stdio.h>
#include<conio.h>

void Convert_With_Toggledcase(char *);

int main()
{
	char cSrc[20]={'\0'};
	
	printf("\n Enter a String=");
	gets(cSrc);
	
	Convert_With_Toggledcase(cSrc);
	
	printf("\n Given String After Toggledcase Is =%s",cSrc);
	
	getch();
	return 0;
}

void Convert_With_Toggledcase(char *str)
{
	int i=0;
	
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
		i++;
	}
	return;
}