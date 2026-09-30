#include <stdio.h>

int main(){
    int a;
    printf("Enter how many numbers you want to type : ");
    scanf("%d", &a);
    int b,c;
    int max = 0;
    int max2 = 0;
    for(int i = 1;i <= a;i++){
        printf("Enter no : ");
        scanf("%d", &b);
        c=b;
        if(b > max){
            max = b;
            }
        if(c > max2 && c != max){
        max2 = c;
        }
    }
    printf("%d\n", max);
    printf("%d", max2);
    
    return 0;
}