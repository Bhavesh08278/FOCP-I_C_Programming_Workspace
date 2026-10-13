#include <stdio.h>
int main()
{
   int fact=1,x;
   scanf("%d",&x);
   for(int i=1;i<=x;i++){
   fact*=i;}
   printf("%d",fact);
   return 0; 
}

