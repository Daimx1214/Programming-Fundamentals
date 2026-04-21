//Write a program to perform multiplication of two matrices
#include <stdio.h>

int main() {
	int row ,colomn ;
	printf("Enter the row and colomn\n");
	scanf("%d %d",&row, &colomn);
	
	int mat1[row][colomn] ,  mat2[row][colomn], sum[row][colomn];
	
	printf("Enter the first matrix\n"); 
	for (int i=0;i<row;i++){
	for (int j=0;j<colomn;j++){
	scanf("%d",&mat1[i][j]);
		}
	}
		printf("Enter the second matrix\n"); 
	for (int i=0;i<row;i++){
	for (int j=0;j<colomn;j++){
	scanf("%d",&mat2[i][j]);
		}
	}
	
	for (int i=0;i<row;i++){
	for (int j=0;j<colomn;j++){
	sum[i][j]=mat1[i][j] * mat2[i][j];
			}
	}
	
		printf("Enter the multiplication of matrix\n"); 
	for (int i=0;i<row;i++){
	for (int j=0;j<colomn;j++){
	printf("%d  " , sum[i] [j] );
		}
		printf("\n");
}
	return 0;
}