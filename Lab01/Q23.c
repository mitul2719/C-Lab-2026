#include <stdio.h>

int main(){
    int a,b;
    printf("Enter number : ");
    scanf("%d", &a);

    printf("Enter power : ");
    scanf("%d", &b);
    int flag;
    flag = a;
     for(int i = 2;i <= b;i++){
        flag = flag*a;
     }
     printf("%d", flag);
    return 0;
}
