#include <stdio.h>
int main(){
int a,b;
int remainder;
int quotient;
printf("Enter two integers :");
scanf("%d %d",&a,&b);
if (b==0)
{
    printf("Error: Division by zero is not allowed.\n");
}
//quotient goes here 
quotient = a/b;
printf("Quotient is %d",quotient);
//remainder goes here 
remainder = a%b;
printf("Remainder is %d",remainder);





return 0;
}
