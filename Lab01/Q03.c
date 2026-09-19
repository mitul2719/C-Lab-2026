#include <stdio.h>

int main() {
    float bs, gs, da, hra;
    printf("Enter the Basic Salary of the employee: ");
    scanf("%f", &bs);

    if (bs <= 10000) {
        da = bs * 0.80; 
        hra = bs * 0.20; 
    } 
    else if (bs <= 20000) {
        da = bs * 0.90;  
        hra = bs * 0.25; 
    } 
    else {
        da = bs * 0.95;  
        hra = bs * 0.30; 
    }
    gs = bs + da + hra;

    printf("\n--- Salary Breakdown ---\n");
    printf("Basic Salary : $%.2f\n", bs);
    printf("DA (Allowance): $%.2f\n", da);
    printf("HRA (Rent)    : $%.2f\n", hra);
    printf("GROSS SALARY : $%.2f\n", gs);

    return 0;
}
