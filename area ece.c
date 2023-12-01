#include <stdio.h>
int main()
{
 int l,b;
 float result,result1;
 printf("enter the value of first integer:");
 scanf("%d",&l);
 printf("enter the value of second integer:");
 scanf("%d",&b);
 result = l * b ;
 printf("area of rectangle :%2.f\n",result);
 result1 = l*l;
 printf("area of square:%2.f\n",result1);
 return 0 ;


}
