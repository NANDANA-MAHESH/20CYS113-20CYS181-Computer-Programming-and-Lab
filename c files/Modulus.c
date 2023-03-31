#include <stdio.h>

int main() {
    int dividend, divisor, remainder;
    float quotient;
    
    printf("Enter number to be divided\n");
    scanf("%d", &dividend);
    
    printf("Enter the divisor\n");
    scanf("%d", &divisor);
    
    quotient = (float)dividend / divisor;
    remainder = dividend % divisor;
    
    printf("The remainder is %d\n", remainder);
    
    return 0;
}
