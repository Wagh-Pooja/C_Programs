#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

void Accept_Element(int[]);
void Display_Element(int[]);

int count_of_Even(int[]);
int count_of_Odd(int[]);
int count_of_Zeros(int[]);

int main()
{
    int Num[size]={},Ecnt=-1,Ocnt=-1,Zcnt=-1;
    
    Accept_Element(Num);
    
    Display_Element(Num);
    
    Ecnt=count_of_Even(Num);
    
    Ocnt=count_of_Odd(Num);
    
    Zcnt=count_of_Zeros(Num);

    printf("\nCount of Even Numbers in Given Array is = %d",Ecnt);
    printf("\nCount of Odd Numbers in Given Array is =%d",Ocnt);
    printf("\nCount of Zeros Numbers in Given Array is =%d",Zcnt);
    getch();
    return 0;
}

int count_of_Even(int Arr[])
{
    int i=0,Cnt=0;
    for(i=0;i<size;i++)
    {
        if(Arr[i]%2==0)
        {
            Cnt++;
        }
    }
    return Cnt;
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

int count_of_Zeros(int Arr[])
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