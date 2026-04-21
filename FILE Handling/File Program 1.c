//1.Create and Write to a File:
// Write a program to create a file named data.txt and write the string "Hello, World!" to it.

#include<stdio.h>

int main(){
	FILE *fptr;
	fptr = fopen("data.txt" , "w");
	fprintf(fptr ,"Hello,World!");
	fclose(fptr);
	
	
}