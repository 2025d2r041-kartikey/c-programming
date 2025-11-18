#include <stdio.h>

int main() {
    int l, w, a, p;

    printf("Enter length of the rectangle: ");
    scanf("%d", &l);

    printf("Enter width of the rectangle: ");
    scanf("%d", &w);

    a = l * w;
    p = 2 * (l + w);

    printf("Area = %d\n", a);
    printf("Perimeter = %d\n", p);

    return 0;
}