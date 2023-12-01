#include <stdio.h>
int main()
{
    int a,I;
    a = 1;
    I = 1;
    printf("enter the desired digit:");
    scanf("%d",&I);
    do
    {
        printf("%d X %d = %d\n",I,a,I*a);
        a++;
    }
    while (a <= 10);
    return 0;
}
