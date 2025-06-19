

#include<stdio.h>
#include<conio.h>

void main()

{

	int a;
	int b;
	int c;

	clrscr();

	printf("            DIVISION            ");
	printf("\n Enter the value of A : ");
	scanf("%d",&a);
	printf("\n Enter the value of B : ");
	scanf("%d",&b);

	c=a/b;

	printf("\nThe division of %d divided by %d is %d",a,b,c);

	getch();

}