#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

void Accept_Element(int[]);
void Display_Element(int[]);
int search_Element(int[],int);

int main()
{
    int Num[size]={},Src_Ele=0,Loc=-1;
    Accept_Element(Num);
    system("cls");
    Display_Element(Num);

    getch();
    printf("\nEnter Element To Be Searched in Array =>");
    scanf("%d",&Src_Ele);
    Loc=search_Element(Num,Src_Ele);

    if(-1==Loc)
    {
        printf("\nNumber %d is not Present in Given Array!!!",Src_Ele);
    }
    else
    {
        printf("\nNumber %d Found at Location %d in Given Array",Src_Ele,Loc+1);
    }
    getch();
    return 0;
}

int search_Element(int Arr[],int Ele)
{
    int i=0;
    for(i=0;i<size;i++)
    {
        if(Ele==Arr[i])
        {
            break;
        }
    }
    if(size==1)
    {
        i=-1;
    }
    return i;
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