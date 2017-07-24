#include<stdio.h>
int main()
{
 int n1,n2,min;
 printf("Enter the two numbers: ");
 scanf("%d%d",&n1,&n2);
 min=(n1>n2)? n1:n2;
 while(1)
 {
  if(min%n1==0 && min%n2==0)
  { 
   printf("Lcm of %d and %d=%d",n1,n2,min);
   break;
  }
  ++min;
  }
 return 0;
}
