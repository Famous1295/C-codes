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
		if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			s++;
		}
	}
	fclose(f1);
	
	printf("\nTotal vowels are %d",s);
}
