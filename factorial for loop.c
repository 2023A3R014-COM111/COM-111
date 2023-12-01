#include <stdio.h>
int main ()
{
    int a;
    long long factorial = 1;
    printf("enter a positive integer: ");
    scanf("%d",&a);
    if (a < 0)
    {
        printf("factorial is not defined for negative numbers.\n");
    }
    else
    {
        for (int i = 1 ; i<= a; i++)
        {
            factorial *=i;
    }
    printf("factorial of %d = %11d\n",a,factorial);
        }
    return 0;
}
