#include <stdio.h>

int main() {
    int n, a[50], i, max, index = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = a[0];

    for (i = 1; i < n; i++)
        if (a[i] > max) {
            max = a[i];
            index = i;
        }

    printf("Max = %d at index %d", max, index);
    return 0;
}