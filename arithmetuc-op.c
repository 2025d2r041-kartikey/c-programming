#include <stdio.h>

int main() {
    int a, b;
    int add, sub, multi, rem;

    printf("Enter the 1st number: ");
    scanf("%d", &a);

    printf("Enter the 2nd number: ");
    scanf("%d", &b);

    add = a + b;
    sub = a - b;
    multi = a * b;
    rem = a % b; 

    printf("Addition = %d\n", add);
    printf("Subtraction = %d\n", sub);
    printf("Multiplication = %d\n", multi);
    printf("Remainder = %d\n", rem);

    return 0;
}