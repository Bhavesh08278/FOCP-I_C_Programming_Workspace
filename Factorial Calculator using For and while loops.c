#include <stdio.h>
int main(){
    int a,c,h=1,f=1;
    printf("enter 1)while 2)for - ");
    scanf("%d",&c);
    if("c!=1 || c!=2")
    {
        printf("Invalid choice");
    }
    else{
        printf("enter number to find factorial for- ");
        scanf("%d",&a);
        if(a<0){
        ("Invalid input");
    }
    if(c==1){
        while(h<=a){
            f=f*h;
            h++;
        }
        printf("%d",f);
    }
    else if(c==2){
         for(;h<=a;h++){
         f=f*h;
         }
        }
    printf("%d",f);
    }

return 0;
  

}