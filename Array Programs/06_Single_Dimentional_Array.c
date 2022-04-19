#include<stdio.h>

int main()
{
	int Arr[5] = {10,20,30,40,50};
	
	printf("\n %d",Arr[1]);
	printf("\n %d",Arr[3]);
	printf("\n %d",Arr);
	printf("\n %d",&Arr);
	printf("\n %d",&Arr[2]);
	printf("\n %d",sizeof(Arr));
	printf("\n %d",sizeof(Arr[4]));
	printf("\n %d",Arr+1);
	printf("\n %d",&Arr+1);
}