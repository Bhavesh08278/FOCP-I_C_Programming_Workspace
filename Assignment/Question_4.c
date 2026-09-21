#include <stdio.h>
int main(){
int num1;
int num2;
int num3;
float average;
printf("Enter the first number 1 here :");
scanf("%d",&num1);
printf("Enter the number 2 here :");
scanf("%d",&num2);
printf("Enter the number 3 here :");
scanf("%d",&num3);
average = (num1 + num2 + num3)/3.0;
printf("The average of the numbers is \n%.2f :",average);

return 0;

}