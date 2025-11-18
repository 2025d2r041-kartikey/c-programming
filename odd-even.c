#include <stdio.h>

int main() {
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
        printf("Number %d is EVEN\n", a);
    else
        printf("Number %d is ODD\n", a);

    return 0;
}