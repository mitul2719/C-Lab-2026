#include <stdio.h>

int main(){
    int a,d,e = 0,b,orig,c = 0;
    printf("Enter number : ");
    scanf("%d", &a);
    orig = a;
    for(int i = 1;a != 0;i++){
        b = a%10;
        c = b + c;
        a = a/10;
    }
    for(int j = 1;c != 0;j++){
    d = c%10;
    e = d + e;
    c = c/10;
    }
    printf("%d", e);
    return 0;
}