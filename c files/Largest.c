#include <stdio.h>

int main() {
    int n, index, larger;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int integers[n];
    for (index = 0; index < n; index++) {
        printf("Enter the value for element %d: ", index);
        scanf("%d", &integers[index]);
    }
    larger = integers[0];
    for (index = 1; index < n; index++) {
        int temp = integers[index];
        if (temp > larger) {
            int c = larger;
            larger = temp;
            temp = c;
        }
    }
    printf("The largest number is %d\n", larger);
    return 0;
}
