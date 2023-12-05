#include <stdio.h>

int linearSearch(int arr[],int size,int key)
{
    for(int i = 0;i < size;i++)
    {
        if(arr[i] == key)
        {
            return i;//Element found,return its index
        }
    }
    return -1;//Element not found
}
int main()
{
    int size,key;
    //Input the size of the array
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];

    //Input array elements
    printf("Enter %d elements :\n",size);
    for(int i = 0;i < size;i++)
    {
        scanf("%d",&arr[i]);
    }
    //Input the element to be searched
    printf("Enter the element to search:");
    scanf("%d",&key);
    //Perform linear search
    int result = linearSearch(arr,size,key);
    //Display the result
    if(result != -1)
    {
        printf("Element %d found at index %d.\n",key,result);
    }
    else
    {
        printf("Element %d not found in the array.\n",key);
    }
    return 0;
}
