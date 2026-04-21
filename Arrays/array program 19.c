//Create a program to remove duplicate elements from an array
#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of your array = ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the number=\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr2[n];
    int step = 0;
    
    for (int i = 0; i < n; i++) {
        int duplicate = 0;
        for (int j = 0; j < step; j++) {
            if (arr[i] == arr2[j]) {
                duplicate = 1;
             
            }
        }
        if (!duplicate) {
            arr2[step] = arr[i];
            step++;
        }
    }
    
    printf("Removing duplicate elements");
    for (int i = 0; i < step; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    
    return 0;
}