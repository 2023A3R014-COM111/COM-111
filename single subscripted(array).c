#include <stdio.h>
int main()
{
    int i;
    float x[10],value,total;
    //reading values into the array
    printf("Enter 10 real numbers\n");
    for(i = 0;i < 10;i++)
    {
        scanf("%f",&value);
        x[i] = value;
    }
    //computation of total
    total = 0.0;
    for(i = 0;i < 10;i++)
        total = total + x[i]*x[i];

    //printing x[i] values and total
    printf("\n");
    for(i = 0;i < 10;i++)
        printf("x[%2d] = %5.2f\n",i + 1,x[i]);

    printf("\ntotal = %.2f\n",total);

    return 0;
}
