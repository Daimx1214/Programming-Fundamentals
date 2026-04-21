//1.Write a program to declare an integer variable, assign it a value, and print its value and address using a pointer.
#include<stdio.h>

int main(){
	int a = 5 ;
	int *ptr ;
	 ptr = &a;
	printf("%p\n",ptr);
	printf("%d",*ptr);
	
	return 0;
	
}