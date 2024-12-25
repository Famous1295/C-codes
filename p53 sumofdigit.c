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
	y=y+r;
	no=no/10;
	}
	printf("\nNo=%d and sum=%d",cno,y);
	return 0;
}
