//5.Write a program to demonstrate the concept of a pointer to a pointer by printing the value of a variable using two levels of pointers.
#include <stdio.h>

int main() {
	int a = 2 ;
	printf("Enter the number a =%d\n ",a);
	int *ptr = &a; 
	printf("Enter the pointer ptr = %d\n",*ptr);
	int **ptr2 = &ptr;
	printf("Enter the second pointer **ptr = %d\n",**ptr2);
	return 0;
}
	
	