#include<stdio.h>
int main()
{
int n,i=1,sum=0;
printf("Enter the value of N: ");
scanf("%d",&n);
printf("First %d numbers are\n",n);
for(i=1;i<=n;i++)
    {
        printf("%d",i);
        sum=sum+i;
    }
printf("Sum = %d",sum);
return 0;
}
