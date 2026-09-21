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
           printf("Choose the operation :- \n1)Addition\n2)Subtraction\n3)Multiply\n4)Divide\n5)Remainder\n");
           scanf("%d",&c);
 float remainder=fmodf(a,b);
 if (c==1)
           {
              printf("The Sum is- %f",a+b);
                        }
else if(c==2)            
             {
                    printf("The Difference is- %f",a-b);
                                         }
else if(c==3)
            {
                 printf("The Product is- %f",a*b);
                         }
else if(c==4)
            {
                printf("The Quotient is- %f",a/b);
                      }
else if(c==5)
                {
                    printf("The Remainder is- %f",remainder);
                         }
else
          {
            printf("Invalid Choice");
                 }
return 0;
}
