#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	int s=0,p=0;
	f1=fopen("d:\\abc.txt","r");
	
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(isupper(ch))
		{
			s++;
		}
		else
		{
			p++;
		}
	}
	fclose(f1);
	
	printf("\nTotal upper character are %d",s);
	printf("\nTotal lower character are %d",p);
}
