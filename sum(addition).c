#include <stdio.h>
int addition(int num1,int num2)
{
    int sum;
    //Arguments are used here
    sum = num1+num2;
    //Function return type is integer so we are returning an integer value,the sum of the passed numbers.
    return sum;
}
int main()
{
    int var1,var2;
    printf("Enter number 1:");
    scanf("%d",&var1);

    printf("Enter number 2:");
    scanf("%d",&var2);

    int res = addition(var1,var2);
    printf("Output:%d",res);
}
