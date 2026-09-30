#include <stdio.h>

int main(){
    int a;
    printf("Enter how many numbers you want to type : ");
    scanf("%d", &a);
    int b,c;
    int max = 0;
    int min = 100000000;
    
    for(int i = 1;i <= a;i++){
        printf("Enter no : ");
        scanf("%d", &b);
        c=b;
        if(b > max)                            
            max = b;
           if(c < min)
             min = c;}
        
        printf("Maximum value is : %d\n", max);
        printf("Minimum value is : %d", min);
    return 0;
}