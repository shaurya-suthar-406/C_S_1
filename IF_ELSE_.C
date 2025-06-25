#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	int b;
	clrscr();
	printf("Enter the value of A : ");
	scanf("%d",&a);
	printf("Enter the value of B : ");
	scanf("%d",&b);

	if(a>b)
	{
	printf("A is greater than B");
	}

	else
	{
	printf("B is greater than A");
	}
	getch();
}
