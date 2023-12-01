#include <stdio.h>
#include <math.h>

int main()
{
    double x = 2.0;
    double y = 3.0;

    printf("Square root of %.2f:%.2f\n",x,sqrt(x));
    printf("Exponential function, e^%.2f:%.2f\n",x,exp(x));
    printf("Natural logarithm of %.2f:%.2f\n",x,log(x));
    printf("Common logarithm (base 10) of %.2f:%.2f\n",x,log10(x));
    printf("Ceil of %.2f:%.2f\n",x,ceil(x));
    printf("Floor of %.2f:%.2f\n",x,floor(x));
    printf("Round of %.2f:%.2f\n",x,round(x));
    printf("Sine of %.2f:%.2f\n",x,sin(x));
    printf("Cosine of %.2f:%.2f\n",cos(x));
    printf("Tangent of %.2f radians:%.2f\n",x,tan(x));
    printf("Arcsine of %.2f:%.2f radians\n",x,asin(x));
    printf("Arccosine of %.2f:%.2f radians\n",x,acos(x));
    printf("Arctangent of %.2f:%.2f radians\n",x,atan(x));
    printf("Arctangent of %.2f/%.2f:%.2f radians\n",y,x,atan2(y,x));
    printf("%2f raised to the power of %.2f:%.2f\n",x,y,pow(x,y));
    printf("Absolute value of %.2f:%.2f\n",-x,fabs(-x));
    printf("Hyperbolic sine of %.2f:%.2f\n",x,sinh(x));
    printf("Hyperbolic cosine of %.2f:%.2f\n",x,cosh(x));
    printf("Hyperbolic tangent of %.2f:%.2f\n",x,tanh(x));

    return 0;
    }
