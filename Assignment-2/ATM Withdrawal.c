#include <stdio.h>
int main(){
int pin,amount,balance;
int correctPin=1234;
printf("Enter PIN:");
scanf("%d",&pin);
printf("Enter Withdrawl amount :");
scanf("%d",&amount);
printf("Enter the current balance :");
scanf("%d",&balance);
if (pin == correctPin){
    if(amount>0){
        if(amount%100==0){
            if(amount<=balance){
                printf("Withdrawl successful\n");
                balance-=amount;
                printf("The remaining balance is %d",balance);
            }
            else {
                printf("Insufficient balance\n");
            }
        }
        else {
            printf("Invalid amount");
        }
    }
    else {
        printf("Invalid amount");
    }
}
else {
    printf("Invalid pin");
}




    return 0;
}