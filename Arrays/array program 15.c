#include <stdio.h>

int main() {
    int row, colomn;
    
    printf("Enter the number of rows and columns \n");
    scanf("%d %d", &row, &colomn); 
    
    int mat1[row][colomn]; 
    
    printf("Enter the matrix \n"); 
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colomn; j++) {
            scanf("%d", &mat1[i][j]); 
        }
    }
    
  
    printf("Transpose of the matrix \n");
    for (int i = 0; i < row; i++) { 
        for (int j = 0; j < colomn; j++) {
            printf("%d ", mat1[j][i]);
        }
        printf("\n");
    }
    return 0;
}
