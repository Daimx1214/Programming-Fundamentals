//Write a program to find the second largest element in an array
#include <stdio.h>

int main (){
	int n ,temp;
	printf("Enter the number");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter the array\n");
	for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
                  }
                  
    for(int i=0;i<n;i++){
    	for(int j=i+1;j<n;j++){
    		if(arr[i]>arr[j]){
    			temp = arr[i];
    			arr[i]=arr[j];
    			arr[j]=temp;
    	       	}
			}
		}
		
		printf("Sorted array\n");
		for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
		}
		
		printf("\nThe second highest number ");
		printf("%d" , arr[n-2]);
	
	     	return 0;
	}
			