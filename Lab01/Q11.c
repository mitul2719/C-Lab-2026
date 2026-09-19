#include <stdio.h>

int main(){
    int days,hours,minutes,seconds,a,b,c;

    printf("Enter total seconds : \n");
    scanf("%d",&seconds);

    days = seconds / 86400;
    a = seconds%86400;
    hours = a / 3600;
    b = a % 3600;
    minutes = b / 60;
    c = b % 60;
    printf("%d days %d hours %d minutes %d seconds", days, hours, minutes, c);
    return 0;
}