#include<stdio.h>
#include<conio.h>

int  Form_Number_Frim_String(char *);

int main()
{
	char cSrc[20]={'\0'};
	int Num=0;
	
	printf("\n Enter a String=");
	gets(cSrc);
	
	Num= Form_Number_From_String(cSrc);
	
	printf("\n Number Created From Given String Is =%d",Num);
	
	getch();
	return 0;
}

int Form_Number_From_String(char *str)
{
	int i=0, No=0;
	
	while(str[i]!='\0')
	{
		if(str[i]>='0' && str[i]<='9')
		{
			No=(No*10)+(str[i]-48);
		}
		i++;
	}
	return No;
}