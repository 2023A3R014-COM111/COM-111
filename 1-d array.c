#include <stdio.h>
int main()
{
    int arr[5],i;

    for(i = 0;i < 5;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("\nPrinting elements of the array: \n\n");

    for(i = 0;i < 5;i++)
    {
        printf("%d\n",arr[i]);
    }
    //signal to operating system program ran fine
    return 0;
}
