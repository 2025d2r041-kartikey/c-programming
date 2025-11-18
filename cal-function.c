#include <stdio.h>

int add(int a, int b){ return a + b; }
int sub(int a, int b){ return a - b; }
int mul(int a, int b){ return a * b; }
int divi(int a, int b){ return b ? a / b : 0; }

int main() {
    int a, b;
    char ch;
    scanf("%d %c %d", &a, &ch, &b);

    switch (ch) {
        case '+': printf("%d", add(a,b)); break;
        case '-': printf("%d", sub(a,b)); break;
        case '*': printf("%d", mul(a,b)); break;
        case '/': printf("%d", divi(a,b)); break;
        default: printf("Invalid");
    }
    return 0;
}
