#include<stdio.h>
#include<conio.h>

void Display_Array(int Arr[],int Size);

int main()
{
	int Num[7]={10,20,30,40,50,60,70};
	
	Display_Array(Num,7); 
	getch();
	return 0;
}

void Display_Array(int Arr[],int Size)
{
	int i=0;
	
	for(i=0;i<Size;i++)
	{
		printf("\n Value of element %d = %d",i+1,Arr[i]);
	}
	
	return;
}