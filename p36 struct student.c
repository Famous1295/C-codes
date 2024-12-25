#include<stdio.h>
struct student{
	int sid;
	char sname[100];
	int std;
};
main(){
	struct student s[200];
	int i,n;
	printf("Enter limint=>");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter Student id number=>");
		scanf("%d",&s[i].sid);
		
		fflush(stdin);
		printf("\nEnter Student name=>");
		gets(s[i].sname);
		
		printf("\nEnter Student Std=>");
		scanf("%d",&s[i].std);
	
	}
	printf("****************************");
	for(i=0;i<n;i++)
	{
		printf("\nStudent id=>%d\nStudent name=>%s\nStudent Std=>%d",s[i].sid,s[i].sname,s[i].std);
	}
}
