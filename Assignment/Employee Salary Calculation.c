#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter the basic salary here :");
    scanf("%f",&a);
    printf("Enter the Allowance here :");
    scanf("%f",&b);
    printf("Enter the bonus here :");
    scanf("%f",&c);
    printf("The final salary is :%.2f",a+b+c);
    
    


return 0;
}