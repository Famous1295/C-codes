#include<stdio.h>
int main(){
	int a =20,b=2;
	int *pa,*pb;
	pa=&a;
	pb=&b;
	printf("\nadd=%d",*pa+*pb);
	printf("\nadd=%d",*pa-*pb);
	printf("\nadd=%d",(*pa)*(*pb));
	return 0;
}
