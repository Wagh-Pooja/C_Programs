#include<stdio.h>
#include<conio.h>

int main()
{
	char cSrc[50]={'\0'};
	int i=0, SPCnt=0;
	
	puts(" Enter a String=");
	gets(cSrc);
	
	while(cSrc[i] != '\0')
	{
		if(cSrc[i]==' ')
		{
			SPCnt++;
		}
		i++;
	}
	
	printf("\n Count Of White Spaces In Given String Is =%d",SPCnt);
	
	getch();
	return 0;
}