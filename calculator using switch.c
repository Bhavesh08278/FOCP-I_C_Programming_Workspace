#include <stdio.h>
#include <math.h>
// math.h used for using modulus for float
int main()
{
 float a,b;
 int c;
  printf("Enter 1st number- ");
  scanf("%f",&a);
      printf("Enter 2nd number- ");
      scanf("%f",&b);
           printf("Choose the operation :- \n1)Addition\n2)Subtraction\n3)Multiply\n4)Divide\n5)Remainder\nChoose 1,2,3,4,5 - ");
           scanf("%d",&c);
 float remainder=fmodf(a,b);
switch(c)
{
    case 1:
    printf("sum-%f",a+b);
    break;
    case 2:
    printf("sub-%f",a-b);
    break;
    case 3:
    printf("mul-%f",a*b);
    break;
    case 4:
    printf("div-%f",a/b);
    break;
    case 5:
    printf("rem-%f",remainder);
    break;
    default:
    printf("Invalid choice");
}

return 0;

}