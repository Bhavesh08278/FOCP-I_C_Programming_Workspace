#include <stdio.h>

int main()
{
    int a, r, n, sum = 0, term;

    scanf("%d", &a);
    scanf("%d", &r);
    scanf("%d", &n);

    term = a;

    for(int i = 1; i <= n; i++)
    {
        sum += term;
        term *= r;
    }

    printf("%d", sum);

    return 0;
}