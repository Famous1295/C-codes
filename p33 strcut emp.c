#include<stdio.h>


struct emp
{
	int eid;
	char ename[100];
	int esal;
};	

main()
{
	struct emp e1,e2,e3;

	printf("\nEnter employee id=>");
	scanf("%d",&e1.eid);
	
	fflush(stdin);
	printf("\nEnter employee name=>");
	gets(e1.ename);
	
	printf("\nenter employeee salary=>");
	scanf("%d",&e1.esal);
	
	printf("\nEnter employee id=>");
	scanf("%d",&e2.eid);
	
	fflush(stdin);
	printf("\nEnter employee name=>");
	gets(e2.ename);
	
	printf("\nenter employeee salary=>");
	scanf("%d",&e2.esal);
	
	printf("\nEnter employee id=>");
	scanf("%d",&e3.eid);
	
	fflush(stdin);
	printf("\nEnter employee name=>");
	gets(e3.ename);
	
	printf("\nenter employeee salary=>");
	scanf("%d",&e3.esal);

	printf("\nEmployee id=>%d/n Emplyoee name=>%s\nEmplyoee salary=>",e1.eid,e1.ename,e1.esal);	
	printf("\nEmployee id=>%d/n Emplyoee name=>%s\nEmplyoee salary=>",e2.eid,e2.ename,e2.esal);
	printf("\nEmployee id=>%d/n Emplyoee name=>%s\nEmplyoee salary=>",e3.eid,e3.ename,e3.esal);
}



