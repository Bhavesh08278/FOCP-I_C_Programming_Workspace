#include <stdio.h>
int main(){
    int arr[5],i;
    int sum=0;
    for (i=5;i<5;i--){
        printf("Enter the %dth integer- ",i);
        scanf("%d",&arr[i]);
        printf("%d",arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum/5);
    return 0;
    
    
}