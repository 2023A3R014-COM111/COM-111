 #include <stdio.h>
int main()
{
    float radius, side, length,width;

    printf("enter the radius of circle:");
    scanf("%f",&radius);

    printf("enter the side of square:");
    scanf("%f",&side);

    printf("enter length of rectangle:");
    scanf("%f",&length);

    printf("enter the width of rectangle:");
    scanf("%f",&width);

    float circleArea = 3.141*radius*radius;
    float circlePerimeter = 2*3.141*radius;

    float squareArea = side*side;
    float squarePerimeter= 4*side;

    float rectangleArea = length*width;
    float rectanglePerimeter= 2*(length + width);

    printf("circle:\n");
    printf("Area :%.2f\n",circleArea);
    printf("Perimeter :%.2f\n",circlePerimeter);

    printf("\nsquare :\n");
    printf("Area : %.2f\n",squareArea);
    printf("Perimeter : %.2f\n",squarePerimeter);

    printf("\nrectangle : %.2f\n");
    printf("Area:%.2f\n",rectangleArea);
    printf("Perimeter :%.2f\n",rectanglePerimeter);
    return 0;
}










