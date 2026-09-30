#include <stdio.h>

int main(){
    int a,b,orig,c = 0;
    printf("Enter number : ");
    scanf("%d", &a);
    orig = a;
    for(int i = 1;a != 0;i++){
        b = a%10;
        c = b + c;
        a = a/10;
    }
    printf("Sum of individual digits is %d", c);
    return 0;
}