#include<stdio.h>
int main(){
	int a =20;
	int *b;
	b=&a;
	printf("\n a=%d *b=%d",a,*b);
	a=50;
	printf("\n a=%d *b=%d",a,*b);
	*b=50;
	printf("\n a=%d *b=%d",a,*b);
	return 0;
}
