#include <stdio.h>

int main() 
{
    int p,i,n,count=0;
	printf("Enter the number=>");
	scanf("%d",&n);
	for(p=0;p<=n;p++)
	{
   	 if (n <= 1)
		printf(" ");
   	 else {
   	     for(i = 1; i <= n; i++) 
			{

        	   if (n % i == 0)
           	     count++;
        	}
      	  	if (count < 2)
	            printf("%d is NOT prime\n", n);
	        
  			}
	}
    return 0;
}

