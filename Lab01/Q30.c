#include <stdio.h>

int main(){
    int a,b,c = 0;
    printf("Enter number : ");
    scanf("%d", &a);
    for(int i = 1;a != 0;i++){
        b = a%10;
        b = b + c;
        c = b*10;
        a = a/10;
    }
    printf("%d", b);
     return 0;
}