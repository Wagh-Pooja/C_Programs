#include<stdio.h>
#include<conio.h>

void strcpyX(char *, char *);

int main()
{
	char str1[20]={}, str2[20]={};
	
	printf("\n Enter a String=");
	gets(str1);
	
	strcpyX(str1,str2);
	
	printf("\n Given String Is =%s", str1);
	printf("\n Copied String Is =%s",str2);
	
	getch();
	return 0;
}

void strcpyX(char *Src, char *Dest)
{
	int i=0;
	
	while(Src[i]!='\0')
	{
		Dest[i]=Src[i];
		i++;
	}
	return;
}