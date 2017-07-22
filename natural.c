#include<sdtio.h>
int main()
{
 int n;
 printf("Enter the number: ");
 scanf("%d",&n);
 if(n>=0)
 {
  n=n*(n+1)/2;
  printf("sum=%d\n",n);
 }
  return 0;
}
  
