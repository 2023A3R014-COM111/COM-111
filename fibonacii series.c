#include <stdio.h>
int main()
{
int f1=0,f2=1,f3,i,number;

printf("enter the value of elements:");
scanf("%d",&number);
printf("\n %d %d,f1,f2);

for(i=2;i<number;++i)
{
    f3=f1+f2;
    printf("%d",f3);
    f1=f2;
    f2=f3;
}
return 0;
    }
