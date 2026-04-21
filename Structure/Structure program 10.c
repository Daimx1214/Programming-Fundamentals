//10.Rectangle Area: Define a structure Rectangle with:
// length (float)
// width (float)
// Write a program to input the dimensions of a rectangle, calculate its area, and display the result.
#include <stdio.h>
struct area{
	float length;
	float width;
};
   int main(){
   	struct area a;
   	float area;
   	printf("Enter the dimension of rectangle\n");
   	
  
   	
   	printf("length  ");
   	scanf("%f" , &a.length);
   	
   	printf("Width  ");
   	scanf("%f" ,&a.width);
   	
   	area =a.length*a.width;
   	
   	printf("The area of rectangle is %f * %f = %f" ,a.length,a.width,area);
   	return 0;
   }