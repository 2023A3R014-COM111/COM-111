#include <stdio.h>
void swapx(int x , int y);
int main()
{
    int a = 10 , b = 20;
    swapx(a,b);
    printf("in the caller function values are :\na = %d b = %d\n",a,b);
    return 0;
}
void swapx(int x , int y)
{
    int t;

    t = x;
    x = y;
    y = t;
    printf("inside function values are :\nx = %d y = %d\n", x,y);

}
