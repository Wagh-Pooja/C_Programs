#include<stdio.h>
#include<conio.h>

int main()
{
	char cSrc[50]={'\0'};
	int i=0, vCnt=0;
	
	puts(" Enter a String=");
	gets(cSrc);
	
	while(cSrc[i] != '\0')
	{
		if(cSrc[i]=='a' || cSrc[i]=='A' || cSrc[i]=='e' || cSrc[i]=='E' || cSrc[i]=='i' || cSrc[i]=='I' || cSrc[i]=='o' || cSrc[i]=='O' || cSrc[i]=='u' || cSrc[i]=='U')
		{
			vCnt++;
		}
		i++;
	}
	
	printf("\n Count Of Vowels In Given String Is =%d",vCnt);
	
	getch();
	return 0;
}