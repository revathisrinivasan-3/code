#include <stdio.h>
int main()
{
    int i, n, g1=0, g2=1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", r1);
        nextTerm = g1+g2;
        g1 = g2;
        g2 = nextTerm;
    }
    return 0;
}
