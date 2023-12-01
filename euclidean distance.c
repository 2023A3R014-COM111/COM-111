#include <stdio.h>
#include <math.h>

int main()
{
float x1,y1,x2,y2;
printf("Enter the coordinates of the first point (x1 y1):");
scanf("%f %f",&x1,&y1);

printf("Enter the coordinates of the second point (x2 y2):");
scanf("%f %f",&x2,&y2);

float distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

printf("The euclidean distance between the two point is:%.2f\n",distance);

return 0;
}
