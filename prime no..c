#include <stdio.h>
int main()
{
    int n,i=2;
    int isprime = 1;
    printf("enter a number:");
    scanf("%d",&n);

    if(n <= 1)
    {
        isprime = 0;
    }
    else
    {
        while(i <= n/2)
        {
            if(n % i == 0)
            {
                isprime = 0;
                break;
            }
            i++;
        }
    }
    if(isprime)
    {
        printf("%d is a prime number.\n",n);
    }
    else
    {
        printf("%d is not a prime number.\n",n);
    }
        return 0;
}
