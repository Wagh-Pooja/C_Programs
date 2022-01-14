#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

void Accept_Element(int[]);
void Display_Element(int[]);
int Find_Min_Element(int[]);

int main()
{
    int Num[size]={},Min=0;
    
    Accept_Element(Num);
    Display_Element(Num);
    
    getch();
    
    Min=Find_Min_Element(Num);
    
    printf("\nMinimum Element in Given Array is %d",Min);
    getch();
    return 0;
}

int Find_Min_Element(int Arr[])
{
    int i=0,Low=0;
    for(i=0;i<size;i++)
    {
        if(i==0)
        {
            Low=Arr[i];
            continue;
        }
        if(Arr[i]<Low)
        {
            Low=Arr[i];
        }
    }
    return Low;
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