//.Implement a program to reverse the elements of an array
#include <stdio.h>

int main() {
	int n;
	printf("enter the number ");
	scanf("%d",&n);
	int  arr[n];
	printf("Enter the array\n");
	
	for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
}

     printf("Reversed Array\n");
		for(int i=n-1;i>=0;i--){
	printf("%d\n",arr[i]);
                           }
                           
	return 0;
}