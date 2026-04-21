//3.Write a program to swap two numbers using a function and pointers.
#include<stdio.h>
void swap  (int *a ,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main (){
	int a ;
	int b ;
	printf("Enter the number");
	scanf("%d%d" , &a,&b);
	 printf("Before swapping a = %d , b = %d",a,b);
	 swap(&a ,&b);
	 printf("After swapping a = %d , b = %d",a,b);
	 
	 return 0;
	 }