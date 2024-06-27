#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main(){

float a,b,c,x1,x2,delta;

printf("Coeficiente a:");
scanf("%f", &a);
printf("Coeficiente b:");
scanf("%f",&b);
printf("Coeficiente c:");
scanf("%f",&c);

delta= (b*b)-(4*a*c);

if((a==0)||(delta<0)){
   printf("Esta equacao nao possue raizes rais");
   }else{
   x1=(-b + sqrt(delta)) / (2 * a);
   x2=(-b - sqrt(delta)) / (2 * a);

   printf("X1 = %.4f\n",x1);
   printf("X2 = %.4f",x2);

   }
}
