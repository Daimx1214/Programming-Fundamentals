//Write a program to find all pairs of elements in an array whose sum is equal to a given number 
#include <stdio.h>

int main() {
    int n, pair;

    printf("Enter the number of elements ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the pair sum ");
    scanf("%d", &pair);
    
    printf(" Those pairs whose sum is %d \n", pair );

    for (int i = 0; i < n ; i++) {
        for (int j = 0 ; j < n; j++) {
            if (arr[i] + arr[j] == pair) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}
