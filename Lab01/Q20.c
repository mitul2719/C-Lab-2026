#include <stdio.h>

int main(){
    int a,b,c;
    char o;
    printf(" 1 = +\n 2 = *\n 3 = -\n 4 = /\n");
            
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter arthimetic operator : ");
    scanf(" %c", &o);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    switch (o) {
        case '1':
        c = a + b;
        printf("Result : %d\n", c);
        break;
    
        case '2':
        c = a*b;
        printf("Result : %d\n", c);
        break;

        case '3':
        c = a-b;
        printf("Result : %d\n", c);
        break;

        case '4':
        c = a/b;
        printf("Result : %d\n", c);
        break;
    }

    
    return 0;
}