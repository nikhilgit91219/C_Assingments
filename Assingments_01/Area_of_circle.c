#include<stdio.h>
#include<conio.h>
	int main()
	{
		float Radius, Area;
		printf("Enter radius of circle to calculate area.\n");
		scanf("%f",&Radius);
		Area = 3.14*Radius*Radius;
		printf("Area of circle is %f having the radius %f.",Area,Radius);
		return 0;
	}
