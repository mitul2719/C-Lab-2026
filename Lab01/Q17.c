#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter a : \n");
    scanf("%d", &a);

    printf("Enter b : \n");
    scanf("%d", &b);

    printf("Enter c : \n");
    scanf("%d", &c);
     if(a > b && a > c)
     printf("a is the largest number");

     else if(b > a && b > c)
     printf("b is the largest");

     else if(c > a && c > a)
     printf("c is the largest");

    return 0;
}