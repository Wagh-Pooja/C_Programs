#include<stdio.h>
#include<conio.h>

int main()
{
	char cSrc[50]={'\0'};
	char cDest[50];
	int i=0,j=0;
	
	puts(" Enter a String=");
	gets(cSrc);
	
	while(cSrc[i] != '\0')
	{
		i++;
	}
	i=i-1;
	
	while(i>=0)
	{
		cDest[j]=cSrc[i];
		j++;
		i--;
	}
	cDest[j]='\0';
	
	printf("\n Given String Is = %s",cSrc);
	printf("\n Reverse of Given String is = %s",cDest);
	
	getch();
	return 0;
}