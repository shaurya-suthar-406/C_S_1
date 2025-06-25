

#include<stdio.h>
#include<conio.h>

void main()
{
	int rno,s1,s2,s3,total;
	double per;
	char sname[50];
	clrscr();
	printf("\nEnter Student Name : ");
	gets(sname);
	printf("\nEnter Student Roll No : ");
	scanf("%d",&rno);
	printf("\nEnter Marks of Subject 1 : ");
	scanf("%d",&s1);
	printf("\nEnter Marks of Subject 2 : ");
	scanf("%d",&s2);
	printf("\nEnter Marks of Subject 3 : ");
	scanf("%d",&s3);
	total=s1+s2+s3;
	per=total/3;

	printf("\nStudent Name : %s",sname);
	printf("\nRoll No : %d",rno);
	printf("\nTotal : %d",total);
	printf("\nPercentage : %d",per);

	if(per>=70)
	{
		printf("\nDistinction");
	}
	else if(per>=60)
	{
		printf("\nFirst Class");
	}
	else if(per>=50)
	{
		printf("\nSecond Class");
	}
	else if(per>=40)
	{
		printf("\nPass Class");
	}
	else
	{
		printf("\nFail");
	}
	getch();
}
