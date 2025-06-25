#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,j,temp;
	clrscr();
	printf("\nEnter Array Elements\n");
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d Element : ",i);
		scanf("%d",&a[i]);
	}
	printf("\nArray Elements Are\n");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d] = %d",i,a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nArray Elements are in Ascending Order");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d] = %d",i,a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nArray Elements are in Descending Order");

	getch();
}

