#include <stdio.h>
int main(){
float price,totalbill;int quantity;
//The amount goes here 
printf("Enter the price here :");
scanf("%f",&price);
//The quantity goes here 
printf("Enter the quantity here :");
scanf("%d",&quantity);
//Display the total bill 
totalbill = price*quantity;
printf("The totalbill = \n%.2f",totalbill);


    
}