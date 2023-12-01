#include <stdio.h>
#include <ctype.h>
int main()
{
    int row;
    printf("enter the number of row :\n");
    scanf("%c",&row);
    if(isdigit(row))
    {
        for(row =  1 +  row;row++);
        {
            isspace(row);
        }
        else
        {
            printf("enter valid input");
        }
    }
    return 0;
}
