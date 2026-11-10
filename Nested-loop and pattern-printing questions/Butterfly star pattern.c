#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=i;
        if(i>(n+1)/2){
            a=n-i+1;}

        for(int j=1;j<=a;j++){
            printf("*");}

        for(int j=1;j<=2*(n-a);j++){
            printf(" ");}

        for(int j=1;j<=a;j++){
            printf("*");}

        printf("\n");
    }

    return 0;
}