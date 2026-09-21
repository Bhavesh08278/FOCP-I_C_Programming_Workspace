#include <stdio.h>

int main() {
   int a=5;
   int j;
   a=++a;
   printf("%d",a);
   j=a++;
   j=--a;
   printf("%d",j);
   return 0;

}