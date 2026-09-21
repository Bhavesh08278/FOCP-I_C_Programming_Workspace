#include <stdio.h>
int main() {
    int num1,num2,num3;
    printf("Enter no.1- ");
    scanf("%d",&num1);
    printf("Enter no.2- ");
    scanf("%d",&num2);
    printf("Enter no.3- ");
    scanf("%d",&num3);
    if (num1>num2 && num1>num3)
    printf("%d",num1);
    else if (num2>num1 && num2>num3)
    printf("%d",num2);
    else if (num3>num1 && num3>num2)
    printf("%d",num3);

return 0;
}