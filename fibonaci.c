#include <stdio.h>
int main()
{
    int i, n, r1=0, r2=1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", r1);
        nextTerm = r1+r2;
        r1 = r2;
        r2 = nextTerm;
    }
    return 0;
}
