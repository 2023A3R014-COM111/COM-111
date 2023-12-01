#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two integers:");
    scanf("%d %d",&a,&b);
    //bitwise AND
    printf("a & b = %d\n",a & b);
    //bitwise OR
    printf("a|b = %d\n",a|b);
    //bitwise XOR
    printf("a^b = %d\n",a^b);
    //bitwise NOT (complement)-unary operator
    printf("~a = %d\n",~a);
    printf("~b = %d\n",~b);
    //left shift
    printf("a << 1 = %d\n",a << 1);
    //right shift
    printf("b >> 1 = %d\n",b >> 1);

    return 0;
}
