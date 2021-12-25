#include<stdio.h>
#include<stdlib.h>

struct Product
{
	int P_Id;
	char P_Name[20];
	float P_P_Price;
	float P_S_Price;
};

int main()
{
	struct Product Prod1,Prod2;
	printf("\n\n Accepting Product Details=\n");
	
	printf("\n Enter 1st Product ID=");
	scanf("%d",&Prod1.P_Id);
	
	printf("\n Enter 1st Product Name=");
	scanf("%s",&Prod1.P_Name);
	
	printf("\n Enter 1st Product Purchase Price=");
	scanf("%f",&Prod1.P_P_Price);
	
	printf("\n Enter 1st Product Sales Price=");
	scanf("%f",&Prod1.P_S_Price);
	
	printf("\n Enter 2nd Product ID=");
	scanf("%d",&Prod2.P_Id);
	
	printf("\n Enter 2nd Product Name=");
	scanf("%s",&Prod2.P_Name);
	
	printf("\n Enter 2nd Product Purchase Price=");
	scanf("%f",&Prod2.P_P_Price);
	
	printf("\n Enter 2nd Product Sales Price=");
	scanf("%f",&Prod2.P_S_Price);
	
	system("cls");
	
	printf("\n==========********==========\n");
	
	printf("\n 1st Product Details = \n ID = %d \n Name = %s \n Purchase Price = %f \n Sales Price = %f \n",Prod1.P_Id,Prod1.P_Name,Prod1.P_P_Price,Prod1.P_S_Price);
	
	printf("\n 2nd Product Details = \n ID = %d \n Name = %s \n Purchase Price = %f \n Sales Price = %f \n",Prod2.P_Id,Prod2.P_Name,Prod2.P_P_Price,Prod2.P_S_Price);
	
	return 0;
}