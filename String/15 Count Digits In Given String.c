#include<stdio.h>
#include<conio.h>

int main()
{
	char cSrc[50]={'\0'};
	int i=0, DCnt=0;
	
	puts(" Enter a String=");
	gets(cSrc);
	
	while(cSrc[i] != '\0')
	{
		if(cSrc[i]>='0' && cSrc[i]<='9')
		{
			DCnt++;
		}
		i++;
	}
	
	printf("\n Count Of Digits In Given String Is =%d",DCnt);
	
	getch();
	return 0;
}