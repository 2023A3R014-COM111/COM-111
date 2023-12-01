#include <stdio.h>
int main()
{
    int integervar;
    float floatvar;
    char charvar;

    printf("Size of int:%lu bytes\n",sizeof(int));
    printf("Size of float:%lu bytes\n",sizeof(float));
    printf("Size of char:%lu bytes\n",sizeof(char));

    printf("Size of integervar:%lu bytes\n",sizeof(integervar));
    printf("Size of floatvar:%lu bytes\n",sizeof(floatvar));
    printf("Size of charvar:%lu bytes\n",sizeof(charvar));

    return 0;
}
