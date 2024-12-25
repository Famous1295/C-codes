#include<stdio.h>
struct book{
	int bid;
	char bname[100];
	int bpr;
};
main(){
	struct book b[200];
	int i,n;
	printf("Enter limit=>");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter Book id=>");
		scanf("%d",&b[i].bid);
		
		fflush(stdin);
		printf("\nEnter Book name=>");
		gets(b[i].bname);
		
		printf("\nEnter Book Price=>");
		scanf("%d",&b[i].bpr);
	
	}
	printf("****************************");
	printf("\nBid\tBname\tPrice");
	for(i=0;i<n;i++)
	{
		
		if(b[i].bpr<50)
		{
			printf("\nBook id=>%d Book name=>%s Book Price=>%d Sasti ",b[i].bid,b[i].bname);;
		}
		else
		{
			printf("\nBook id=>%d Book name=>%s Book Price=>%d mehenghi ",b[i].bid,b[i].bname);;
		}
	}
}
