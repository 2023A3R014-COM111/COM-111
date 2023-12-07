#include <stdio.h>
int main()
{
    int rows,columns;
    //Input the dimensions of 2d array
    printf("enter the number of rows :");
    scanf("%d",&rows);
    printf("enter the number of columns : ");
    scanf("%d",&columns);
    int myArray[rows][3];
    //Call the function to read elements
     readArray(myArray,rows,columns);
    //Call the function to print elements
    printArray(myArray,rows,columns);
    return 0;
}
void readArray(int arr[][3],int rows , int columns )
{
    printf("enter elements for the 2d array:\n");
    for (int i = 0 ; i<rows ; i++)
    {
        for (int j = 0; j < columns ; j++)
        {
            printf("enter the element at position [%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}
//Function to print elements of 2D array
void printArray(int arr[][3],int rows, int columns )
{
    printf("elements of 2d array:\n");
    for (int i = 0; i< rows; i++)
    {
        for (int j = 0; j< columns ; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

