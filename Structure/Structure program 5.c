//5.Product Discounts: Define a structure Product with:
// productName (string)
// price (float)
// discount (float)
// Calculate the discounted price of a product and display it.
#include <stdio.h>
#include <string.h>

struct Product {
    char productName[50];
    float price;
    float discount;
};
int main() {
    struct Product B;
    
    printf("Enter details for Product\n");
    
    printf("Product name ");
    scanf(" %[^\n]", B.productName); 
    
    printf("Price ");
    scanf("%f", &B.price);
    
    printf("Discount (in percentage) ");
    scanf("%f", &B.discount);

    float discountedPrice = B.price - (B.price * B.discount / 100);
    
    printf("\n\tProduct Details\n");
    printf("Product Name %s\n", B.productName);
    printf("Original Price: %.2f\n", B.price);
    printf("Discount: %.2f%%\n", B.discount);
    printf("Discounted Price: %.2f\n", discountedPrice);
    
    return 0;
}
