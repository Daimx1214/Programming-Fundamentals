//Write a function to swap two numbers using pointers. Your program should ask the user for two 
//integers and display their values before and after swapping.
#include<stdio.h>
   
  void swap (int*a , int*b){
   	
   	int temp = *a;
   	*a=*b;
   	*b=temp;
   	
   }
   int main (){
   	int a  ;
   	printf("enter the value of a  ");
   	scanf("%d",&a);
   	int b ;
   	printf("enter the value of b  ");
   	scanf("%d",&b);
   	 printf("Before swapping: a = %d, b = %d\n", a, b );
   	 swap (&a , &b);
   	 printf("After swapping: a = %d, b = %d\n", a, b);
   	 
   	 return 0;
   }