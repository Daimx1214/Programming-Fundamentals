//Write a program to declare an integer array of size 5 and initialize it with user input values
#include <stdio.h>

int main() {
	int  arr[5];
	printf("Enter thee array\n");
	
	for(int i=0;i<5;i++){
	scanf("%d\n",&arr[i]);
}
	printf("All arrray elements are\n");
		for(int i=0;i<5;i++){
	printf("%d\n",arr[i]);
                           }
	return 0;
}