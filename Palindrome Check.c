#include <stdio.h>

int main(){

    int a,r,c=0,d;

    printf("Enter: ");
    scanf("%d",&a);

    d=a;

    while(a!=0){

        r=a%10;
        c=c*10+r;
        a/=10;

    }

    if(d==c){

        printf("It is palindrome");

    }
    else{

        printf("It is not palindrome");

    }

    return 0;
}