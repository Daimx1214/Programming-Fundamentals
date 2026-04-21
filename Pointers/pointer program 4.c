//4.Write a program to declare an array of integers. Use pointer arithmetic to print the second and fourth elements of the array.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements ");
    scanf("%d", &n);

    int arr[n];  
    printf("Enter the Array ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    printf("Array elements ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  
    }
    printf("\n");
    
    if(n>=2){
	
    printf("second element  %d\n " ,  *(arr +1));
}
     if(n>=4){
	
    printf("fourth element  %d\n ",  *(arr +3));
}
    
    return 0;
}
