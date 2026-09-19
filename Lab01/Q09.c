#include <stdio.h>

int main(){
    int hours,minutes,seconds;
    printf("Enter hours : ");
    scanf("%d", &hours);

    printf("Enter minutes : ");
    scanf("%d", &minutes);

    printf("Enter seconds : ");
    scanf("%d", &seconds);
     printf("Total seconds = %d", (minutes*60) + (hours*3600) + (seconds));
    return 0;
}