#include<stdio.h>

void fun()
{
	int i = 10;
	i++;
	printf("\n Value of i in fun is : %d",i);
}

void gun()
{
	static int i = 10;
	i++;
	printf("\n Value of i in fun is : %d",i);
}

int main()
{
	printf("\n Inside main");
	fun();
	fun();
	gun();
	gun();
	gun();
	return 0;
}
