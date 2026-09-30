#include <stdio.h>

int main(){
    int a;
    printf("Enter a :");
    scanf("%d", &a);
    int b = 0,c = 1;
    int d = 1,e = 1;
    if(a%2 == 0){
    for(int i = 1;2*i <= a;i++){
    printf("%d\n", b);
    printf("%d\n", c);
    b = b + c;
    c = c + b;
    }
    }
    else{
        printf("0\n");
    for(int j = 1;2*j < a;j++){
    printf("%d\n", d);
    printf("%d\n", e);
    d = d + e;
    e = e + d;
    }
    }
    return 0;
}