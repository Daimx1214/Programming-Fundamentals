//3. Define a structure named Employee with the following members:
// name (string)
// id (integer)
// salary (float)
//Input and display the details of three employees.
#include<stdio.h>
#include <string.h>

    struct Employee {
	 char name[50];
    int age;
    float salary;
};
    int main(){
     	struct Employee Employee[3];
	    for (int i = 0; i < 3; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        
         
        printf("Name: ");
        scanf(" %[^\n]", Employee[i].name); 
        
        printf("Age: ");
        scanf("%d", &Employee[i].age);
        
        printf("Marks: ");
        scanf("%f", &Employee[i].salary);
        
        printf("\n");
    }
         printf("\nEmployee Information:\n");
        for (int i = 0; i < 3; i++) {
        printf("Student %d\n", i + 1);
        printf("Name %s\n", Employee[i].name);
        printf("Age %d\n", Employee[i].age);
        printf("Marks %.2f\n", Employee[i].salary);
        printf("\n");
    }

         return 0;
     }