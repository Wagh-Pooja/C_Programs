#include<stdio.h>
#include<conio.h>

int main()
{
	char cSrc[50]={'\0'};
	int i=0;
	
	puts(" Enter a String=");
	gets(cSrc);
	
	while(cSrc[i] != '\0')
	{
		if(cSrc[i]>='a' && cSrc[i]<='z')
		{
			cSrc[i]-=32;
		}
		i++;
	}
	
	printf("\n Given String After Capitalization Is =%s",cSrc);
	
	getch();
	return 0;
}