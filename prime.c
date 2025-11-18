#include <stdio.h>

int main() {
    int n, i = 2, flag = 1;
    scanf("%d", &n);

    while (i < n) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
        i++;
    }

    if (flag)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
