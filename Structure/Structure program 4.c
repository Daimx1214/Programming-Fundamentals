//4.Define a structure Book with:
// title (string)
// author (string)
// price (float)
#include<stdio.h>
#include<string.h>

    struct Book {
	 char title[50];
     char author[50];
    float price;
};
    int main(){
    	
     	struct Book  B;
	   
        printf("Enter details for Employee \n" );
        
        printf("Title name ");
        scanf(" %[^\n]", B.title); 
        
        printf("Author name ");
        scanf(" %[^\n]", &B.author);
        
        printf("price of Book ");
        scanf("%f", &B.price);
   
         printf("\n\tBook Information:\n");
  
   
        
        printf(" Title Name :%s\n", B.title);
        printf(" Author name :%d\n", B.author);
        printf(" Price of Book : %.2f\n", B.price);
      
         return 0;
     }