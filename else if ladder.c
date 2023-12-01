#include <stdio.h>
int main()
{
 int averagemarks;
 printf("enter the average marks");
 scanf("%d",&averagemarks);

if(averagemarks>=80 && averagemarks<=100)
{
    printf("grade:honours(H)\n");

}
else if(averagemarks >=60 && averagemarks <80)
{
    printf("grade:first division(1)\n");

}
else if(averagemarks >=50 && averagemarks <60)
{
    printf("grade:second division(2)\n");
}
else if(averagemarks >=40 &&  averagemarks <50)
{
    prinf("grade:third division(2)\n");
}
else if(averagemarks >=0 && averagemarks <40)
{
    printf("grade:fail(F)\n");
}
else
{
    printf("invalid input!averagemarks should be between 0 and 100\n");
}
return 0;
}
