#include<stdio.h>
int main()
{
	int no,r,y=0,cno;
	printf("\nEnter no=>");
	scanf("%d",&no);
	cno=no;
	while(no>0)
	{
	r=no%10;
	y=y*10+r;
	no=no/10;
	}
	printf("\nNo=%d and revno=%d",cno,y);
	if(cno==y)
	{
		printf("\nNo is palindrome");
	}
	else
	{
		printf("\nIt is not plaindrome");
	}
	return 0;
}
