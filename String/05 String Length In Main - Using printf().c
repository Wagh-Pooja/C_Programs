#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	char cSrc[50]={'\0'};
	int Len=0;
	
	puts(" Enter a String=");
	gets(cSrc);
	
	Len=printf("%s",cSrc);
	system("cls");
	
	printf("\n Length Of Given String <%s> Is = %d",cSrc,Len);
	
	getch();
	return 0;
}