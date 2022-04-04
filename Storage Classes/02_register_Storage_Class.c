#include<stdio.h>

void fun()
{
	int i = 11;
	int j;
	auto int k;
	auto int l = 12;
}

void gun()
{
	register int x = 11;
	register int y;
}

int main()
{
	printf("\n Inside main");
	fun();
	gun();
	return 0;
}