#include<stdio.h>
#include<math.h>

float SquareArea(float side);
float CircleArea(float rad);
float RectangleArea(float a,float b);

int main()
{
	float a=5.0;
	float b=10.0;
	
	printf("Area is : %f",RectangleArea(a,b));
	return 0;
	
}
float SqureArea(float side){
	return side*side;
}
float CircleArea(float rad){
	return 3.14*rad*rad;
}
float RectangleArea(float a,float b){
	return a*b;
}
