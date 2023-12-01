#include <stdio.h>
int main()
{


    float temperature;

    printf("Enter the value of temperature today");
    scanf("%f",&temperature);

    if (temperature<20)
 {

    printf("weather is cold today");
 }
 else
    printf("weather is hot today");

    return 0;

}
