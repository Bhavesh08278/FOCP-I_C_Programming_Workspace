#include <stdio.h>
int main(){
    float P,R,T;
    printf("Enter the Principal amount: ");
    scanf("%f",&P);
    printf("Enter the Rate of Interest: ");
    scanf("%f",&R);
    printf("Enter the Time Period in years: ");
    scanf("%f",&T);
    printf("Simple Interest: %.2f",(P*R*T)/100);
}