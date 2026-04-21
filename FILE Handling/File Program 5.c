//5.Count Words in a File:
// Write a program to count the number of words in a file named story.txt.
#include <stdio.h>

int main() {
    FILE *fptr;
    int count = 0;
    char word[50];

    fptr = fopen("story.txt", "r");

    while (fscanf(fptr, "%s", word) == 1) {
        count++;
    }

    fclose(fptr);

    printf("Total words in file: %d\n", count);
    return 0;
}
