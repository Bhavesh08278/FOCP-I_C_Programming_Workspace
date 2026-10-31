#include <stdio.h>
// We will use switch case now 
int main() {
    int a,b;
    char choice;
    printf("Enter the numbers here :");
    scanf("%d%d",&a,&b);
    printf("Choose the operation :\n1 Addition \n2 Subtraction \n3 MUltiplication \n4 Divide \n");
    scanf(" %c",&choice);
    switch(choice)//since you take %c above so you have to take numbers in ' otherwise you have to use the skye value
    {
        case '+':
        case '1':
        printf("\n Sum=%d",a+b);//break is needed to stop the break otherwise it will read all value 
        break;
        case '-':
        case '2':
        printf("\n Sub=%d",a-b);
        break;
        case '*':
        case '3':
        printf("\n Mul=%d",a*b);
        break;
        case '%':
        case '4':
        printf("\n Div=%d",a%b);
        break;
        default:
        printf("\n Invalid choice");
            
    }
    return 0;
}