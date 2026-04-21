//3.Append to a File:
// Write a program to append the text "C programming is fun!" to an existing file named data.txt.
#include<stdio.h>

int main(){
	FILE *fptr;
	fptr = fopen("data.txt" , "a");
	fprintf(fptr,"C programming is fun!");
	fclose(fptr);
        }