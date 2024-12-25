#include<stdio.h>


struct emp
{
	int eid;
	char ename[100];
	int esal;
};	

main()
{
	struct emp e[100];
	int i,n;
	
	printf("\nEnter number of users=>");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	
		printf("\nEnter employee id=>");
		scanf("%d",&e[i].eid);
	
		fflush(stdin);
		printf("\nEnter employee name=>");
		gets(e[i].ename);
	
		printf("\nenter employeee salary=>");
		scanf("%d",&e[i].esal);
	}
	
	printf("\nEid\tEname\tSalary");
	for(i=0;i<n;i++)
	{
	printf("\nEmployee id=>%d\n Emplyoee name=>%s\nEmplyoee salary=>%d",e[i].eid,e[i].ename,e[i].esal);
	}
}



