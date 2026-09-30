#include <stdio.h>

int main(){
    int a,b,orig,c = 0;
    printf("Enter number : ");
    scanf("%d", &a);
    orig = a;
    for(int i = 1;a != 0;i++){
        b = a%10;
        b = b + c;
        c = b*10;
        a = a/10;
    }
    if(b != orig)
    printf("Number is not a palindrom");
    else
    printf("Number is a palindrom");
    return 0;
}