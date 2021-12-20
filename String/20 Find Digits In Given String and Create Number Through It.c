#include<stdio.h>
#include<conio.h>

int main()
{
	char cSrc[50]={'\0'};
	int i=0, Num=0;
	
	puts(" Enter a String=");
	gets(cSrc);
	
	while(cSrc[i] != '\0')
	{
		if(cSrc[i]>='0' && cSrc[i]<='9')
		{
			Num=(Num*10)+(cSrc[i]-48);
		}
		
		i++;
	}
	
	printf("\n Number From Digits in Given String is=%d",Num);
	
	getch();
	return 0;
}