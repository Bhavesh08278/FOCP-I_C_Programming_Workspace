#include <stdio.h>
int main(){
    int arr[5],i;
    int sum=0,max;
    for (i=0;i<5;i++){
        printf("Enter the %dth integer- ",i);
        scanf("%d",&arr[i]);}
    for(int j=0;j<5;j++){
        max=arr[0];
        if(max<arr[j]){
            max=arr[j];
        }
    }   
    printf("%d",max); 
    
    return 0;
    
    
}