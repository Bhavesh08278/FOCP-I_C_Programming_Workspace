#include <stdio.h>
int main(){
    long long int sum=0;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i*i;
    }
printf("%lld",sum);

}