#include <stdio.h>

int main(){
    int a;
    printf("Enter number : ");
    scanf("%d", &a);

    int flag;
    flag = a;
    for(int i = 1; i < flag; i++){
        a = a*i;
    }
    printf("%d", a);
    return 0;
}
