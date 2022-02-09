#include<stdio.h>
#include<conio.h>

void strRevX(char *, char *);

int main()
{
	char str1[20]={}, str2[20]={};
	
	printf("\n Enter a String=");
	gets(str1);
	
	strRevX(str1,str2);
	
	printf("\n Given String Is =%s", str1);
	printf("\n Reversed String Is =%s",str2);
	
	getch();
	return 0;
}

void strRevX(char *Src, char *Dest)
{
	int i=0, j=0;
	
	while(Src[i]!='\0')
	{
		i++;
	}
	i--;
	
	while(i>=0)
	{
		Dest[j]=Src[i];
		j++;
		i--;
	}
	return;
}