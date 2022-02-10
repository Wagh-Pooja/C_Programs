#include<stdio.h>
#include<conio.h>

int char_count(char *, char);

int main()
{
	int Cnt=0;
	char cArr[40]={}, ch='\0';
	
	printf("\n Enter a String:");
	gets(cArr);
	
	printf("\n Enter Character To Search In String=");
	ch=getche;
	Cnt=char_count(str,ch);
	
	printf("\n Character %c occured %d times in given string",ch,Cnt);
	
	getch();
	return 0;
}

int char_count(char *src, char c)
{
	int count=0;
	
	while(*src!='\0')
	{
		if(*src==c)
		{
			count++;
		}
	}
	return count;
}