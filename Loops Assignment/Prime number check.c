#include <stdio.h>

int main() {
   int s,i=2;
   scanf("%d",&s);
   for(;i<=(s/2);i++){
      if(s%i==0){
         
         break;
      }
      
   }
   if(i==(s/2)+1)
   printf("\n It is prime");
   else
   printf("\n It is not prime");

} 