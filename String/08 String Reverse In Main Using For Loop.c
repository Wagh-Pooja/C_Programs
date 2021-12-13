#include<stdio.h>
#include<conio.h>

int main()
{
	char cSrc[50]={'\0'};
	char cDest[50]={};
	int i=0,j=0;
	
	puts(" Enter a String=");
	gets(cSrc);
	
	for(i=0; cSrc[i]!='\0';i++);
	
	for(i=i-1, j=0; i>=0; j++, i--)
	{
		cDest[j]=cSrc[i];
	}
	cDest[j]='\0';
	
	printf("\n Given String Is = %s",cSrc);
	printf("\n Reverse of Given String is = %s",cDest);
	
	getch();
	return 0;
}