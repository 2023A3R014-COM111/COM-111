#include <stdio.h>
int main()

{
  int num1 , num2;
  float result,result1,result2;
  printf("enter the first integer:");
  scanf("%d",&num1);
  printf("enter the second integer:");
  scanf("%d",&num2);
  result = num1 + num2;
  printf("sum: %2.f\n",result);
result1 = num1 - num2;
  printf("difference: %2.f\n",result1);
  result2 = num1* num2;
  printf("product: %2.f\n",result2);
  int remainder = num1 % num2 ;
  printf("remainder :%d\n",remainder);
  return 0;
}
