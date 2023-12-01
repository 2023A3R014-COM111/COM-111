#include <stdio.h>
int fibonacci(int n);
int main()
{
    int num;
    /*INPUT THE TERM NUMBER FROM USER*/
    printf("enter a positive integer for the term number:");
    scanf("%d",&num);
    /*CHECKIF THE NUMBER IS POSITIVE*/
    if (num <= 0 )
    {
        printf("the term number cannot be negative or zero.\n");

    }else
    /*CALL THE FIBONACCI FUNCTION  AND DISPLAY THE RESULT*/
    {
        int result = fibonacci(num);
        /*CHECK THE ERROR STATE*/
        if (result == -1)
        {
            printf("Error : invalid term number entered .\n");
        }else
        {
            printf("the %dth term in the fibonacci series is : %d\n",num,result);
        }
    }
    return 0;
    /*RECURSIVE FUNCTION TO CALCULATE FIBONACCI SERIES*/
}
int fibonacci (int n)
{

    if (n <= 0)
    {
        printf("\nError: term number cannot be negative.\n");
        return -1;
    }
    else if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return(fibonacci (n -1)+ fibonacci(n-2));
    }
}
