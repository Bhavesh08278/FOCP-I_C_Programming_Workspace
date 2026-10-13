#include <stdio.h>

int main()
{
    int a, b;
    /*1-->Rock
      2-->Paper
      3-->Scissors*/

    printf("Enter Player 1 choice: ");
    scanf("%d", &a);

    printf("Enter Player 2 choice: ");
    scanf("%d", &b);

    if (a < 1 || a > 3 || b < 1 || b > 3)
    {
        printf("Invalid Input");
    }
    else
    {
        switch(a)
        {
            case 1:
                if (b == 1)
                    printf("Draw");
                else if (b == 2)
                    printf("Player 2 Wins");
                else
                    printf("Player 1 Wins");
                break;

            case 2:
                if (b == 1)
                    printf("Player 1 Wins");
                else if (b == 2)
                    printf("Draw");
                else
                    printf("Player 2 Wins");
                break;

            case 3:
                if (b == 1)
                    printf("Player 2 Wins");
                else if (b == 2)
                    printf("Player 1 Wins");
                else
                    printf("Draw");
                break;
        }
    }

    return 0;
}