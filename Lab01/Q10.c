#include <stdio.h>

int main(){
    
    float maths,chemistry,physics,em;

    printf("Enter marks in physics : ");
    scanf("%f", &physics);

    printf("Enter marks in maths : ");
    scanf("%f", &maths);

    printf("Enter marks in chemistry : ");
    scanf("%f", &chemistry);

    printf("Enter marks of enterence exam : ");
    scanf("%f", &em);

    printf("cutoff marks = %f", (maths/2) + (physics/2) + (chemistry/2) + em);
    return 0;
}