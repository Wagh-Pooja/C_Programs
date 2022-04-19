#include<stdio.h>

int main()
{
	int no = 11;
	
	printf("\n %d",sizeof(no));
	printf("\n %d",&no);
	printf("\n %d",no);
	
	char ch = 'A';
	
	printf("\n\n %d",sizeof(ch));
	printf("\n %d",&ch);
	printf("\n %c",ch);
	
	double d = 3.14;
	
	printf("\n\n %d",sizeof(d));
	printf("\n %d",&d);
	printf("\n %f",d);
}