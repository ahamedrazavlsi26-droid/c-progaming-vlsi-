#include<stdio.h>
int main()
{
	int a[50],b[10][10];
	int n,rows,cols;
	int i,j,sum1,sum2;
	sum1=0;
	sum2=0;
	printf("enter the number of the elements in 1D array:");
	scanf("%d",&n);
	printf("enter %d elemensts:\n",n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n1Darray elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		sum1=sum1+a[i];
	}
	printf("\nsum of 1D array=%d",sum1);
	printf("\n\enter the number of rows in 2Darray:");
	scanf("%d",&rows);
	printf("\n\enter the number of columns in 2Darray:");
	scanf("%d",&cols);
	printf("\n\enter the elements of 2Darray:");
		for (i=0;i<rows;i++)
	{
		
		for (j=0;j<cols;j++)
		{
				scanf("%d",&b[i][j]);
		}
	}
	printf("\n2Daray elements:\n");
	for (i=0;i<rows;i++)
	{
		for (j=0;j<cols;j++)
		{
	printf("%d\t",&b[i][j]);
	sum2=sum2+b[i][j];
		}	
		printf("\n");
	}
	printf("sum of 2darray=%d",sum2);
	return 0;
}