//Write a program to declare an array of 5 integers. Use a pointer to access and print all the elements of the array.
#include<stdio.h>

int main(){
	int arr[5] ;
	printf("Enter the number\n");
	for(int i =0 ; i<5 ; i++){
	scanf("%d",&arr[i]);
     }
     printf("Resultant number\n");
	for(int i =0 ; i<5 ; i++){
		printf("%d\n", *(arr +i));
	}

	return 0;
}