#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students\n");
    scanf("%d", &n);

    char name[n][50];
    int mark1[n], mark2[n], mark3[n], rollno[n], total[n];
    float average[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", name[i]);
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &rollno[i]);
        printf("Enter mark1: ");
        scanf("%d", &mark1[i]);
        printf("Enter mark2: ");
        scanf("%d", &mark2[i]);
        printf("Enter mark3: ");
        scanf("%d", &mark3[i]);

        total[i] = mark1[i] + mark2[i] + mark3[i];
        printf("Total marks are %d\n", total[i]);

        average[i] = (float) total[i] / 3;
        printf("Average marks is %.2f\n", average[i]);
    }

    return 0;
}
