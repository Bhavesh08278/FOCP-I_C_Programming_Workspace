#include <stdio.h>
int main(){
   int unit,bill;
   printf("Enter the unit here :");
   scanf("%d",&unit);
    
    if (unit<100){
        bill = unit*2;
    printf("You have to pay %d",bill);
    }
    
    else if(unit>100 && unit<=200){
        bill = 200 +(unit-100)*3;
    printf("You have to pay %d",bill);
    }
    
    else 
    bill = 500+(unit-200)*5;
    printf("\nYou have to pay %d",bill);


    return 0;
}