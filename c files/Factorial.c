#include <stdio.h>

int fact(int n);

int main() {
    printf("Enter the number whose factorial is to be calculated\n");
    int n;
    scanf("%d", &n);
    fact(n);
    return 0;
}

int fact(int n) {
    int f = 1;
    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            f *= i;
        }
        printf("Factorial of number %d is %d\n", n, f);
    }
    else {
        if (n == 0) {
            printf("Factorial of number %d is %d\n", n, f);
        }
        else {
            printf("Factorial of negative numbers is invalid\n");
        }
    }
    return f;
}
