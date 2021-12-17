#include<stdio.h>
#include<conio.h>

int main()
{
	char cSrc[50]={'\0'};
	int i=0, Cap_Cnt=0;
	
	puts(" Enter a String=");
	gets(cSrc);
	
	while(cSrc[i] != '\0')
	{
		if(cSrc[i]>='A' && cSrc[i]<='Z')
		{
			Cap_Cnt++;
		}
		i++;
	}
	
	printf("\n Count Of Capital Lwtters In Given String Is =%d",Cap_Cnt);
	
	getch();
	return 0;
}