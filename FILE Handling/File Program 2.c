//2.Read from a File:
// Write a program to read and display the contents of a file named data.txt.
#include<stdio.h>

int main(){
	FILE *fptr;
	fptr = fopen("data.txt" , "r");
	char a[20];
	fgets(a,20,fptr);
	printf("%s",a);
	fclose(fptr);
}