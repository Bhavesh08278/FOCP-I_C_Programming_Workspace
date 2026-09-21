#include <stdio.h>
int main(){
int a;
char b[30];
char c;
float d;
printf("Enter you name- %s",b);
scanf("%s",&b);
printf("Enter your age- %d",a);
scanf("%d",&a);
printf("Enter your Height- %f",d);
scanf("%f",&d);
printf("Enter your Grade- %c",c);
scanf("%c",&c);
printf("----- Student Profile -----");
printf("\nName: %s",b);
printf("\nAge: %d",a);
printf("\nHeight: %f",d);
printf("\nGrade: %c",c);
return 0;

}