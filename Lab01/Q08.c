#include <stdio.h>

int main(){
    int days,hours,minutes,seconds = 31558150,a,b,c;
    
    days = seconds / 86400;
    a = seconds%86400;
    hours = a / 3600;
    b = a % 3600;
    minutes = b / 60;
    c = b % 60;
    printf("%d days %d hours %d minutes %d seconds", days, hours, minutes, c);
    return 0;
}
