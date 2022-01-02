#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

void Accept_Element(int[]);
void Display_Element(int[]);
int Count_Of_Element(int[],int);

int main()
{
    int Num[size]={},Src_Ele=0,Cnt=-1;
    Accept_Element(Num);
    
    system("cls");
    
    Display_Element(Num);

    getch();
    
    printf("\nEnter Element To Be Searched in Array =>");
    scanf("%d",&Src_Ele);

    Cnt=Count_Of_Element(Num,Src_Ele);
    
    printf("\nCount of Number in Given Array is=%d",Src_Ele,Cnt);
    getch();
    return 0;
}

int Count_Of_Element(int Arr[],int Ele)
{
    int i=0,Count =0;
    
    for(i=0;i<size;i++)
    {
        if(Ele == Arr[i])
        {
            Count++;
        }
    }
    return Count;
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