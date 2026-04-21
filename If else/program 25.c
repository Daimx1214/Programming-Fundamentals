#include <stdio.h>

int main() {
    int experience;
    char education;

    printf("Enter your years of experience: ");
    scanf("%d", &experience);

    printf("Do you have a degree? (y/n): ");
    scanf(" %c", &education);  

    if (experience >= 10) {
        if (education == 'y' || education == 'Y') {
            printf("You are classified as a Senior employee.\n");
        } else {
            printf("You are classified as a Mid-level employee.\n");
        }
    } else {
        if (experience >= 5) {
            printf("You are classified as a Mid-level employee.\n");
        } else {
            printf("You are classified as a Junior employee.\n");
        }
    }

    return 0;
}
