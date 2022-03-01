/*input radius and calculate area of circle and circumference of acircle.
Area of circle = 3.14*r*r, Circumference of circle = 2*3.14*r.*/

#include <stdio.h>
#include <math.h>
int main()
{
	float r,a,cf;

	printf("Enter a radius : ");
	scanf("%f",&r);

	//area of circle
	a = 3.14*pow(r,2);

	//circumference of a circle
	cf = 2*3.14*r;

	printf("\nArea = %f\nCircumference = %f",a,cf);
}
