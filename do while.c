#include <stdio.h>
int main()
{
int number,multiplier;
printf("Enter a number:");
scanf("%d", &number);
multiplier = 1;
printf("multiplication table for %d:\n",number);

do
{
    printf("%d*%d = %d\n",number,multiplier,number*multiplier);
    multiplier++;
}
while(multiplier<=10);
return 0;
}
