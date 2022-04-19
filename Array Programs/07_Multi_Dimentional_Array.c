#include<stdio.h>

int main()
{
	int Arr[3][5] = {11,12,13,14,15,21,22,23,24,25,31,32,33,34,35};
	
	printf("\n %d",sizeof(Arr));
	printf("\n %d",sizeof(Arr[0]));
	printf("\n %d",sizeof(Arr[0][0]));
	printf("\n %d",Arr);
	printf("\n %d",&Arr);
	printf("\n %d",Arr+1);
	printf("\n %d",&Arr+1);
	printf("\n %d",Arr[0][0]);
	printf("\n %d",Arr[2][3]);
	printf("\n %d",Arr[1][3]);
}