#include <stdio.h>
int main(){
int p1,p2;
printf("Player 1 enter your choice (1-Rock , 2-Paper , 3-Scissor):");
scanf("%d",&p1);
printf("Player 2 enter your choice (1-Rock , 2-Paper , 3-Scissor) ");
scanf("%d",&p2);
if (p1<1 || p1>3 || p2<1 || p2>3){
    printf("\n Invalid choice");
}
else if(p1==p2) {
    printf("\nDraw");
}
else {
    switch (p1){
        case 1: //rock
        if (p2==3)
        printf("\n Player 1 wins");
        else 
        printf("\n Player 2 wins");
    break;
        case 2: //paper 
        if(p2==1)
        printf("Player 1 wins");
        else 
        printf("Player 2 wins");
        break;
        case 3: //scissor 
        if (p2==2)
        printf("\nPlayer 1 wins");
        else 
        printf("\nPlayer 2 wins");
        break;}
}
return 0;
}