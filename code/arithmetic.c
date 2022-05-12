#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d\n", number1, number2, sum);

    /* A second example*/

    int quantity;

    float price, tax, total;

    printf("Enter quantity to buy:");
    scanf("%d", &quantity);

    price = 7.99; //random price

    tax = 1.1; //10% tax

    total = price * quantity * tax;

    printf("For %d items priced $%.2f, the total plus tax is $%.2f\n", quantity, price, total);

    return 0;
}
