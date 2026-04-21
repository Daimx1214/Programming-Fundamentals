//2.Multiple Students Data: Write a program to store and display information about
// 5 students using the Student structure defined above.
#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct student students[5]; 

    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); 
        
        printf("Age: ");
        scanf("%d", &students[i].age);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        
        printf("\n");
    }

    printf("\nStudent Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}
