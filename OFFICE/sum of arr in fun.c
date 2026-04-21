#include<stdio.h>
#include<stdlib.h>
int total(int a[], int b[], int size);
int main() {
	
    int size;
    printf("Enter the size ");
    scanf("%d", &size);
    
    int a[size], b[size];
    printf("Enter the first array");
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter the second array");
    for (int i = 0; i < size; i++) {
        scanf("%d", &b[i]);
    }
    
    int result = total(a, b, size); 
    printf("The total sum is %d\n", result); 
    return 0;
     //data_type* arr = (data_type*)malloc(n * sizeof(data_type));
}
int total(int a[], int b[], int size) {
    //int sum[size];
    int* sum = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        sum[size] = a[i] + b[i];  
    }
    return *sum;  
}
