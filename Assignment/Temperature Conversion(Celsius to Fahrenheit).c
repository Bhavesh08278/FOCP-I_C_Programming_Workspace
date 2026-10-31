#include <stdio.h>
int main(){
float a;
printf("Enter the celsius here :");
scanf("%f",&a);
printf("The temprature in fahrenheit is :%.2f",(a*9/5)+32);

return 0;
}