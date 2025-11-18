#include <stdio.h>
#include <string.h>

int main() {
    char a[50], b[50];
    scanf("%s %s", a, b);

    printf("Length1 = %ld\n", strlen(a));
    printf("Length2 = %ld\n", strlen(b));

    printf("Concat = %s\n", strcat(a, b));
    printf("Compare = %d\n", strcmp(a, b));

    return 0;
}