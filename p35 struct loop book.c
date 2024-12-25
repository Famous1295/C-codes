#include<stdio.h>
struct book{
	int bid;
	char bname[100];
};
main(){
	struct book b[200];
	int i,n;
	printf("Enter limint=>");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter Book id=>");
		scanf("%d",&b[i].bid);
		
		fflush(stdin);
		printf("\nEnter Book name=>");
		gets(b[i].bname);
	
	}
	printf("****************************");
	for(i=0;i<n;i++)
	{
		printf("\nBook id=>%d\nBook name=>%s",b[i].bid,b[i].bname);
	}
}
