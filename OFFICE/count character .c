#include <stdio.h>
int count(char[]);
int main() {
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    scanf(" %[^\n]s", str);
    count = countCharacters(str);
    printf("%d", count);
    return 0;
    }
int countCharacters(char str[]) {
    int count = 0;
    while (str[count] != '\0') { 
        count++;
    }
    return count;
}