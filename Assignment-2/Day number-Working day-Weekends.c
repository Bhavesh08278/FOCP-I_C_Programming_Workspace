#include <stdio.h>
int main(){
 int digit;
 printf("Enter digit :");
 scanf("%d",&digit);
 switch(digit){
    case 1:
    printf("Monday \n Working Day");
    break;
    case 2:
    printf("Tuesday \n Working Day");
    break;
    case 3:
    printf("Wednesday \n Working Day");
    break;
    case 4:
    printf("Thursday \n Working Day");
    break;
    case 5:
    printf("Friday \n Working Day");
    break;
    case 6:
    printf("Saturday \n Weekend");
    break;
    case 7:
    printf("Sunday \n Weekend");
    break;
    default:
    printf("Invalid day\n");
}
return 0;
}