//4.Count Characters in a File:
//Write a program to count the number of characters in a file named input.txt.
#include <stdio.h>

int main() {
    FILE *fptr;
    char ch;
    int count = 0;
    
    fptr = fopen("input.txt", "r");

    while ((ch = fgetc(fptr)) != EOF) {
        count++;
    }

    fclose(fptr);

    printf("Total characters in file: %d\n", count);

    return 0;
}
