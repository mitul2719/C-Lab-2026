#include<stdio.h>

int main(){
int Hindi,English,Physics,Chemistry,Maths;

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

printf("Total marks is %d out of 500 \n", Maths+Chemistry+Physics+Hindi+English);
printf("Percentage is %f \n", (Maths+Chemistry+Physics+Hindi+English)/5.0);
return 0;
}