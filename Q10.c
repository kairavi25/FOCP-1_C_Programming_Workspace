#include <stdio.h>

int main()
{
    int productID, quantity;
    float price, discountPercentage;
    float subtotal, discountAmount, finalAmount;

    printf("Enter Product ID: ");
    scanf("%d", &productID);

    printf("Enter Product Price: ");
    scanf("%f", &price);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Discount Percentage: ");
    scanf("%f", &discountPercentage);

    subtotal = price * quantity;

    discountAmount = (subtotal * discountPercentage) / 100;

    finalAmount = subtotal - discountAmount;

    printf("\n========== CUSTOMER INVOICE ==========\n");

    printf("Product ID: %d\n", productID);
    printf("Subtotal: Rs. %.2f\n", subtotal);
    printf("Discount Amount: Rs. %.2f\n", discountAmount);
    printf("Final Payable Amount: Rs. %.2f\n", finalAmount);

    printf("======================================\n");

    return 0;
}
