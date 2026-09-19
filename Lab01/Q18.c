#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Enter c : ");
    scanf("%d", &c);

    max = (a > b && a > c) ? a : ((b > c) ? b : c);

    printf("The maximum number is: %d\n", max);

    return 0;
}