#include<stdio.h>
#include<conio.h>

int main()
{
	char cSrc[50]={'\0'};
	int Len=0;
	
	puts(" Enter a String=");
	gets(cSrc);
	
	while(cSrc[Len] != '\0')
	{
		Len++;
	}
	
	printf("\n Length Of Given String Is = %d",Len);
	
	getch();
	return 0;
}