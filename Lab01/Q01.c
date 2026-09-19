#include<stdio.h>

int main (){
    int Amount,time;
    float Rate;

    printf("Enter Principle amount - ");
    scanf("%d", &Amount);

    printf("Enter Rate of intrest - ");
    scanf("%f", &Rate);

    printf("Enter Time period (in years) - ");
    scanf("%d", &time);

    printf("Simple intrest is %f", Rate*Amount*time/100);
    return 0;
}
