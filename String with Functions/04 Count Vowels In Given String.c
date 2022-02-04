#include<stdio.h>
#include<conio.h>

int  Vowel_Count(char *);

int main()
{
	char cSrc[20]={'\0'};
	int V_Cnt=0;
	
	printf("\n Enter a String=");
	gets(cSrc);
	
	V_Cnt= Vowel_Count(cSrc);
	
	printf("\n Count Of Vowels In Given String Is =%d",V_Cnt);
	
	getch();
	return 0;
}

int Vowel_Count(char *str)
{
	int i=0, Cnt=0;
	
	while(str[i]!='\0')
	{
		if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
		{
			Cnt++;
		}
		i++;
	}
	return Cnt;
}