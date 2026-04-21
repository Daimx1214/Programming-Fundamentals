//If lengths of three sides of a triangle are input through the keyboard, write a program to find the area of the triangle.
#include<stdio.h>

int main(){
	float base,height,b;

	printf("Enter the  Base and height");
	scanf("%f %f",&base,&height);
	b = 1.0/2 *base *height;
	printf("%f ",b);
	return 0;
}
	
	