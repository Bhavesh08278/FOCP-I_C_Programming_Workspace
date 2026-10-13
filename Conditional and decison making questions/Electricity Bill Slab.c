#include <stdio.h>
int main(){
    float units,bill;
    bill=0;
    printf("Enter the units- ");
    scanf("%f",&units);
    if (units<=100){
            bill=units*2;
            printf("%f",bill);
    }
    else if(units<=200){
        bill=200+(units-100)*3;
        printf("%f",bill);
    }
    else{
        bill=200+300+(units-200)*5;
        printf("%f",bill);
    }
    return 0;
}