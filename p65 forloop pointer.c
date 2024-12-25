#include<stdio.h>
int main(){
	int i,a[5]={12,99,5,77,8};
	int *b;
	b=&a;
	for(i=0;i<5;i++)
	{
		printf("\n%d",*b);
		b++;
	}
	return 0;
}
