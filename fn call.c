#include <stdio.h>
int mul(int x , int y);
int main()
{
    int y ;
    int x = 10;

    y = mul(10,5);/*call*/

}
int mul(int x , int y)
{
  int p;  /*local variable*/
  p = x*y;  /* x = 10 , y = 5*/
  printf("multiply result is %d.",p);
  return p;
}

