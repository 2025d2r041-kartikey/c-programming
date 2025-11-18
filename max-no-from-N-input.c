#include <stdio.h>

int main() {
    int n, na, m;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid!\n");
        return 0;
    }

    printf("Enter number 1: ");
    scanf("%d", &na);
    m = na;  

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &na);

        if (na > m)
            m = na;
    }

    printf("Max number is: %d\n", m);

    return 0;
}