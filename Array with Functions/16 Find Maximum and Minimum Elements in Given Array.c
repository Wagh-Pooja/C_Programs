#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

void Accept_Element(int[]);
void Display_Element(int[]);
int Find_Max_Element(int[]);
int Find_Min_Element(int[]);

int main()
{
    int Num[size]={},Max=0,Min=0;
    
    Accept_Element(Num);
    Display_Element(Num);
    
    getch();
    
    Max=Find_Max_Element(Num);
    Min=Find_Min_Element(Num);
    
    printf("\nMaximum Elements in Given Array is %d",Max);
    printf("\nMinimum Elements in Given Array is %d",Min);
    
    getch();
    return 0;
}

int Find_Max_Element(int Arr[])
{
    int i=0,Top=0;
    for(i=0;i<size;i++)
    {
        if(i==0)
        {
            Top=Arr[i];
            continue;
        }
        if(Arr[i]>Top)
        {
            Top=Arr[i];
        }
    }
    return Top;
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