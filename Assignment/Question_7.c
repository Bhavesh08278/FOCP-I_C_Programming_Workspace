#include <stdio.h>
int main(){
    float marks1,marks2 ,marks3 ,marks4,marks5;
    float sum;
printf("Enter the markes obtained:");
scanf("%f %f %f %f %f",&marks1,&marks2,&marks3,&marks4,&marks5);
sum = marks1+marks2+marks3+marks4+marks5;
printf("Total marks :%.2f",sum);
printf("\nPercentage :%.2f",(sum  /500)*100);





return 0;

}