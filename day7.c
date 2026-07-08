#include <stdio.h>
#include <math.h>

int main(void)
{
	double radius = 0.0;
	double area = 0.0;
	double surface_area = 0.0;
	const double PI = 3.1415926535;

	printf("Enter the radius : ");
	scanf("%lf" , &radius);

	area = PI * pow(radius , 2);
	printf("Area : %.2lf\n" , area);

	surface_area = 4 * area;
	printf("Surface area : %.3lf\n  " , surface_area);

	vol = (4.0/3.0) * PI * pow(radius , 3);
	printf("Volume : %.3lf\n" , volume);
	
	return 0;
}
