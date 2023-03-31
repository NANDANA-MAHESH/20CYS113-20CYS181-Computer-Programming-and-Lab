#include <stdio.h>

void fibo(int n);

int main() {
    printf("Enter the number of terms in Fibonacci Series\n");
    int n;
    scanf("%d", &n);
    fibo(n);
    return 0;
}

void fibo(int n) {
    int a = 0, b = 1, c = 0, i;
    if (n > 0) {
        printf("Fibonacci Series: 0 ");
        for (i = 0; i <= n - 2; i++) {
            c = a + b;
            a = b;
            b = c;
            printf("%d ", a);
        }
    }
    else {
        if (n == 0) {
            printf("%d", a);
        }
        else {
            printf("Invalid input");
        }
    }
}
