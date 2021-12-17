#include<stdio.h>
#include<conio.h>

int main()
{
	char cSrc[50]={'\0'};
	int i=0, Sm_Cnt=0;
	
	puts(" Enter a String=");
	gets(cSrc);
	
	while(cSrc[i] != '\0')
	{
		if(cSrc[i]>='a' && cSrc[i]<='z')
		{
			Sm_Cnt++;
		}
		i++;
	}
	
	printf("\n Count Of Small Letters In Given String Is =%d",Sm_Cnt);
	
	getch();
	return 0;
}