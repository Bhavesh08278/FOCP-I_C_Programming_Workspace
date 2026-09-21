#include <stdio.h>
int main(){
    float a,b,c;
    float d;
    printf("Enter marks in subject1: ");
    scanf("%f",&a);
    printf("Enter marks in subject2: ");
    scanf("%f",&b);
    printf("Enter marks in subject3: ");
    scanf("%f",&c);
    printf("Total marks: %d",a+b+c);
    d=(a+b+c)/3;
    printf("\nAverage: %.2f",d);
    printf("\nResult:");
    if (d>=40){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
return 0;
}