//8.Write a program to find the largest element in an array using pointers.
#include<stdio.h>

int main (){
        int n;
		printf("Enter the number ");
		scanf("%d",&n);
		int arr[n];
		printf("Enter the Array ",n);
		for(int i=0; i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int *ptr = arr;
	int max = *ptr;
	
    for (int i = 1; i < n; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    
		printf("largest number = %d",max);
		return 0 ;
	}