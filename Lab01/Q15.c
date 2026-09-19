#include <stdio.h>

int main(){
    int Hindi,English,Physics,Chemistry,Maths;
    float Percentage;

printf("Enter marks of Hindi\n");
scanf("%d", &Hindi);

printf("Enter marks of English \n");
scanf("%d",&English);

printf("Enter marks of Physics \n");
scanf("%d", &Physics);

printf("Enter marks of Chemistry \n");
scanf("%d", &Chemistry);

printf("Enter marks of Maths \n");
scanf("%d", &Maths);
  
Percentage = (Maths+Chemistry+Physics+Hindi+English)/5.0;
if(Percentage >= 90)
printf("Division A");

else if(Percentage >= 80)
printf("Division B");

else if (Percentage >= 70)
printf("Division C");

else if (Percentage >= 60)
printf("Division D");

else if(Percentage >= 40)
printf("Division E");

else
printf("Fail");
    return 0;
}