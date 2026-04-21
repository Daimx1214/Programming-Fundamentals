//. Simple Function to Calculate the Square of a Number
#include<stdio.h>

int num (int n){
 return (n * n);
}

int main (){
	int a;
	printf("Enter the number");
	scanf("%d",&a);
	int result = num(a);
	 printf("The num is %d * %d = %d " , a,a,result );
	 return 0;
}