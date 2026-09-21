#include <stdio.h>
int main (){
int a,b,temp;
printf("Enter the two integers:");
scanf("%d %d",&a,&b);

//before swapping goes here 
printf("\n Before swapping : %d %d\n",a,b);

temp =a;
a=b;
b=temp;
//after swapping goes here 
printf("\n After swapping : %d %d\n",a,b);

return 0;







}