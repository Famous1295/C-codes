#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	int s=0;
	f1=fopen("d:\\abc.txt","r");
	
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(ch==' ')
		{
			s++;
		}
	}
	fclose(f1);
	
	printf("\nTotal spaces are %d",s);
}
