#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

void Accept_Element(int[]);
void Display_Element(int[]);
int Sum_Of_Element(int[]);

int main()
{
    int Num[size]={},Sum=0;
    
    Accept_Element(Num);
    Display_Element(Num);
    
    getch();
    
    Sum=Sum_Of_Element(Num);
    
    printf("\nSum of All Elements in Given Array is %d",Sum);
    getch();
    return 0;
}

int Sum_Of_Element(int Arr[])
{
    int i=0,Sum=0;
    for(i=0;i<size;i++)
    {
        Sum = Sum+Arr[i];
    }
    return Sum;
}

void Accept_Element(int Arr[])
{
    int i=0;
    for(i=0;i<size;i++)
    {
        printf("\nEnter Value for Element Number %d=>",i+101);
        scanf("%d",&Arr[i]);
    }
    return;
}

void Display_Element(int fun[])
{
    int i=0;
    for(i=0;i<size;i++)
    {
        printf("\nValue of Element %d=%d",i+1,fun[i]);
    }
    return;
}