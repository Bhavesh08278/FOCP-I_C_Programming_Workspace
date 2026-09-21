#include <stdio.h>
int main(){
int a;
float b,c,d;
printf("Enter the product Id :");
scanf("%d",&a);
printf("Enter the Product price :");
scanf("%f",&b);
printf("Enter the Quantity :");
scanf("%f",&c);
printf("Enter the Discount percentage :");
scanf("%f",&d);
printf("Product id :%d,\nSubtotal :%8.2f,\nDiscount amount :%8.2f,\nFinal payable account :%8.2f",a,b*c,(b*c)*d/100,b*c-(b*c)*d/100);

return 0;
}