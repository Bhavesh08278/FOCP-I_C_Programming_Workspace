#include <stdio.h>
int main(){
int marks;
int attendance;
printf("Enter the marks");
scanf("%d",&marks);
printf("\nEnter the attendance");
scanf("%d",&attendance);
if(marks>=90 && attendance>=70){
    printf("Special scholarship");
}
else if(marks>=75 && attendance>=75){
    printf("Eligible");
}
else {
    printf("Not eligible");
}
return 0;
}