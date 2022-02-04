#include<stdio.h>
#include<conio.h>

int strLenX(char *);

int main()
{
	char cSrc[20]={'\0'};
	int Len=0;
	
	printf("\n Enter a String=");
	gets(cSrc);
	
	Len= strLenX(cSrc);
	
	printf("\n Length Of Given String Is =%d",Len);
	
	getch();
	return 0;
}

int strLenX(char *cPtr)
{
	int Cnt=0;
	
	for(Cnt=0; cPtr[Cnt]!='\0';Cnt++);
	
	return Cnt;
}