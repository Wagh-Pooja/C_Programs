#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

void Accept_Element(int[]);
void Display_Element(int[]);
int count_of_Odd(int[]);

int main()
{
    int Num[size]={},OCnt=-1;
    Accept_Element(Num);
    
    system("cls");
    
    Display_Element(Num);
    getch();
    
    OCnt=count_of_Odd(Num);
    
    printf("\nCount of Odd Numbers in Given Array is %d",OCnt);
    getch();
    return 0;
}

int count_of_Odd(int Arr[])
{
    int i=0,Cnt=0;
    for(i=0;i<size;i++)
    {
        if(Arr[i]%2==1)
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