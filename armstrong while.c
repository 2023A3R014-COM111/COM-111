#include <stdio.h>
int main()
{
    int num, orignalNum; remainder , n = 0, result = 0;
    printf("enter a number : ");
    scanf("%d",&num);
    orignalNum = num;
    while (originalNum ! = 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder , n);
        originalNum /= 10;

    }
    if (result == num )
    {
        printf("%d is an armstrong number. \n",num);
    }
    else
    {
        printf("%d is not an armstrong number\n",num);
    }

}
