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
		if(cSrc[i]>='A' && cSrc[i]<='Z')
		{
			cSrc[i]+=32;
		}
		else if(cSrc[i]>='a' && cSrc[i]<='z')
		{
			cSrc[i]-=32;
		}
		i++;
	}
	
	printf("\n Given String After Toggled Case=%s",cSrc);
	
	getch();
	return 0;
}