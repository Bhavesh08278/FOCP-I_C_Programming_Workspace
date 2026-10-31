#include <stdio.h>
void swap(int *xp,int *yp){
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
int main(){
    int x=25,y=67;
    printf("\n before swapping x=%d       y=%d",x,y);
    swap(&x,&y);//call by reference
    //swap(x,y);//call by value
    printf("\n after swapping x=%d y=%d",x,y);




    
}
