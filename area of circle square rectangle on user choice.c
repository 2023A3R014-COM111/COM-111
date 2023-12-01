#include <stdio.h>
int main()
{
    int area, radius,length,breadth,side ,height , base, choices;
    printf("1. area of circle\n");
    printf("2.area of square\n");
    printf("3.area of rectangle\n");
    printf("4.area of triangle\n");
    printf("enter your desired choices");
    printf("%d",&choices);

    switch(choices)
    {
    case 1:
        printf("enter the radius of circle");
        scanf("%d",&radius);
        area = 3.14 * radius * radius;
        printf("area of circle : %d\n",area);
        break;

    case 2 :
        printf("enter the length of rectangle");
        scanf("%d",&length);
        printf("enter the breadth of rectangle");
        scanf("%d ",&breadth);
        area = length*breadth;
        printf("area of rectangle : %d\n",area);
        break;

    case 3 :
        printf("enter the side of square");
        scanf("%d",&side);
        area = side*side;
        printf("area of square : %d\n",area);
        break;
    case 4 :
        printf("enter the height of triangle ");
        scanf("%d",&height);
        printf("enter the base of triangle");
        scanf("%d",&base);
        area = 1/2 * base * height;
        printf("area of triangle : %d\n",area);
        break;
    default :
        printf("invalid choice!\n");
        }
    return 0;
}
