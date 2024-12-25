#include <stdio.h>
int main()
{
   int a=20;
   int b=a;
   
   printf("\nA = %d B = %d",a,b);
   
   b=100;
   
   printf("\nA = %d B = %d",a,b);
   
   a=500;
   
   printf("\nA = %d B = %d",a,b);
   
   
    return 0;
}
