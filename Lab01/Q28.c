#include <stdio.h>
#include <math.h>

int main(){
    int n,i,k,m,orig,l;
    printf("Enter number : ");
    scanf("%d", &n);
    m = n;
    orig=n;
    
    int count = 0;
    for(i = 1;m != 0; i++){
        m = m/10;
        count = count+1;
    }
    int sum = 0;
    for(int i = 1;n != 0;i++){
        k = n%10;
        sum = sum + pow(k,count);
        n = n/10;
    }
if(sum == orig)
printf("Number is armstrong");
else 
printf("number is not armstrong");
    return 0;
}