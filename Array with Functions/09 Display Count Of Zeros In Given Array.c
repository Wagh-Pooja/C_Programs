#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

void Accept_Element(int[]);
void Display_Element(int[]);
int Count_Of_Zeros(int[]);

int main()
{
    int Num[size]={}, ZCnt=-1;
    Accept_Element(Num);
    system("cls");
    Display_Element(Num);

    getch();

    ZCnt=Count_Of_Element(Num);

    printf("\nCount of Zeros in Given Array is =%d",ZCnt);
    getch();
    return 0;
}

int Count_Of_Element(int Arr[])
{
    int i=0,Cnt=0;
    for(i=0;i<size;i++)
    {
        if(0==Arr[i])
        {
            Cnt++;
        }
    }
    return Cnt;
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
