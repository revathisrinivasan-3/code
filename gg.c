#include <stdio.h>
int main()
{
    int i, num1, num2, min;
    printf("Enter any two numbers to find HCF: ");
    scanf("%d%d", &num1, &num2);
    min=(num1>num2)?num1:num2;
    for(i=min;i>=1; i--)
    {
    
     if(num1%i==0 && num2%i==0)
        {
           printf("HCF of %d and %d = %d\n", num1, num2,i);
        }
    }
    
    return 0;
}
