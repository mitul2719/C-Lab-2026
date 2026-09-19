#include <stdio.h>

int main(){
    int a,b,c;
    char o;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter arthimetic operator (+,*,-,/) :");
    scanf(" %c", &o);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    switch (o) {
        case '+':
        c = a + b;
        printf("Result : %d\n", c);
        break;
    
        case '*':
        c = a*b;
        printf("Result : %d\n", c);
        break;

        case '-':
        c = a-b;
        printf("Result : %d\n", c);
        break;

        case '/':
        c = a/b;
        printf("Result : %d\n", c);
        break;
    }

    
    return 0;
}