#include<stdio.h>
#include<conio.h>

int main()
{
	char cSrc[50]={'\0'};
	int i=0, Sp_Sym_Cnt=0;
	
	puts(" Enter a String=");
	gets(cSrc);
	
	while(cSrc[i] != '\0')
	{
		if(!(cSrc[i]>='a' && cSrc[i]<='z' || cSrc[i]>='0' && cSrc[i]<='9' || cSrc[i]>='A' && cSrc[i]<='Z'))
		{
			Sp_Sym_Cnt++;
		}
		i++;
	}
	
	printf("\n Count Of Special Symbols In Given String Is =%d",Sp_Sym_Cnt);
	
	getch();
	return 0;
}