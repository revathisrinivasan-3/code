#include<stdio.h>
int main()
{
  int i=1,sum = 0,n;
printf("Enter the number 1 to 15: ");
scanf("%d",&n);
for (int i=1;i<15;i++)
{
    printf("%d",i);
    sum=sum+i;
}
printf("\n sum=%d",sum);
return 0;
} 
