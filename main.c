#include <stdio.h>

int main() {
    int a, b, product;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    product = a * b;

    printf("Sum of product of the two numbers is: %d\n", product);

    return 0;
}
