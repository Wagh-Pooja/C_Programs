#include<stdio.h>
#include<conio.h>

int main()
{
	char cSrc[50]={'\0'};
	char cDest[50]={};
	int i=0;
	
	puts(" Enter a String=");
	gets(cSrc);
	
	while(cSrc[i] != '\0')
	{
		cDest[i]=cSrc[i];
		i++;
	}
	cDest[i]='\0';
	
	printf("\n Given String Is = %s",cSrc);
	printf("\n Copied String is = %s",cDest);
	
	getch();
	return 0;
}