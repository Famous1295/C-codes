#include <stdio.h>

int main() {
    int i,n,count=0;
	printf("Enter the number=>");
	scanf("%d",&n);
    if (n <= 1)
        printf("%d is NOT prime\n", n);
    else {
        for(i = 1; i <= n; i++) 
		{

           if (n % i == 0)
                count++;
        }
        if (count > 2)
            printf("%d is NOT prime\n", n);
        else
            printf("%d is prime", n);
    }
    return 0;
}

