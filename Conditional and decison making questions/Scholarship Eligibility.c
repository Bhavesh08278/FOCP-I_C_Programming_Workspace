#include <stdio.h>
int main(){
    int marks,attend;
    printf("Enter Marks-");
    scanf("%d",&marks);
    printf("Enter Attendance-");
    scanf("%d",&attend);
    if(marks>=90 && attend>=70){
        printf("Special Scholarship");
    }
    else if(marks>=75 && attend>=75){
        printf("Eligible");
    }
    else
    printf("Not Eligible");
}