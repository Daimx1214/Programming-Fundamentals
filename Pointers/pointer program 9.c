//10.Write a program to pass a pointer to a function. The function should increment the value of the variable by 10.
#include<stdio.h>

int main (){
	int a;
	printf("Enter the  number");
	scanf("%d",&a);
	
	printf("Enter the  number before increment = %d\n",a);
	
	increment(&a);
	printf("Enter the  number after increment = %d",a);
	
	return 0;
}
void increment(int* ptr){
 * ptr = * ptr + 10;
}