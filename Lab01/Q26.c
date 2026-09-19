#include <stdio.h>

int main(){
    int a;
    printf("Enter no : ");
    scanf("%d", &a);
    int sum1 = 0,sum2 = 0;
    
        for(int i = 1;i <= a; i = i+2)
            sum1 = sum1 + i;
            
            printf("Sum of odd numbers : %d\n", sum1);

            for(int k = 0;k <= a;k = k+2)
                sum2 = sum2 + k;
            
            printf("Sum of even numbers : %d", sum2);
        
    return 0;
}