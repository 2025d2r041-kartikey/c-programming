#include <stdio.h>

void swapValue(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("After swap (value): %d %d\n", a, b);
}

void swapRef(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    swapValue(a, b);

    swapRef(&a, &b);
    printf("After swap (reference): %d %d\n", a, b);

    return 0;
}