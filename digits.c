#include<stdio.h>
int main()
{
 int num,remainder,count=0;
 printf("Enter the any number: ");
 scanf("%d",&num);
 while(num>0)
 {
  count=num/10;
  count=count+1;
 }
 printf("\n Number of digits:%d",count);
 return 0;
}
