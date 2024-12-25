#include<stdio.h>


struct book
{
	int bid;
	char bname[20];
	int bprice;
};	

main()
{
	struct book b1,b2,b3,b4;
	
	printf("\n Enter Book Id=>");
	scanf("%d",&b1.bid);
	
	fflush(stdin);
	printf("\n Enter Book Name=>");
	gets(b1.bname);
	
	printf("\n Enter Book price=>");
	scanf("%d",&b1.bprice);
	
	printf("\n Enter Book Id=>");
	scanf("%d",&b2.bid);
	
	fflush(stdin);
	printf("\n Enter Book Name=>");
	gets(b2.bname);
	
	printf("\n Enter Book price=>");
	scanf("%d",&b2.bprice);
	
	printf("\n Enter Book Id=>");
	scanf("%d",&b3.bid);
	
	fflush(stdin);
	printf("\n Enter Book Name=>");
	gets(b3.bname);
	
	printf("\n Enter Book price=>");
	scanf("%d",&b3.bprice);
	
	printf("\n Enter Book Id=>");
	scanf("%d",&b4.bid);
	
	fflush(stdin);
	printf("\n Enter Book Name=>");
	gets(b4.bname);
	
	printf("\n Enter Book price=>");
	scanf("%d",&b4.bprice);
	
	printf("\n Book ID=>%d Book Name=>%s Book Price=>%d",b1.bid,b1.bname,b1.bprice);
	printf("\n Book ID=>%d Book Name=>%s Book Price=>%d",b2.bid,b2.bname,b2.bprice);
	printf("\n Book ID=>%d Book Name=>%s Book Price=>%d",b3.bid,b3.bname,b3.bprice);
	printf("\n Book ID=>%d Book Name=>%s Book Price=>%d",b4.bid,b4.bname,b4.bprice);
}

